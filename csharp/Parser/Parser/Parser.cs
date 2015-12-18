using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

namespace Parser
{
    //Is parsing the expression and returns if it´s an element of the EBNF or not
    public class Parser
    {          
            public bool parseExpression(string s){
            bool res = false;
            string left;
            int inBracket = 0;
            bool foundBlock = false;
            int iteratorCounter = 1;
            foreach (char c in s)
            {
                if (!foundBlock)
                {
                    if (iteratorCounter++ == s.Length) // block stands alone no "+" or "-"  + blocks remain 
                    {
                        res = term(s);
                    }

                    if (c.Equals('('))
                    {
                        inBracket++;
                    }
                    else if (c.Equals(')'))
                    {
                        inBracket--;
                    }

                    if (inBracket==0 && c.Equals('+'))
                    {
                        foundBlock = true;
                        left = s.Substring(0, s.IndexOf("+"));
                        s = s.Substring(s.IndexOf("+") + 1);
                        if (term(left) & parseExpression(s))
                        {
                            res = true;
                        }
                    }
                    else if (inBracket==0 && c.Equals('-'))
                    {
                        foundBlock = true;
                        left = s.Substring(0, s.IndexOf("-"));
                        s = s.Substring(s.IndexOf("-") + 1);
                        if (term(left) & parseExpression(s))
                        {
                            res = true;
                        }
                    }
                }
            }
            return res;   
        }

        //Checks if there is an factor concatenated with "/" or "*" and another factor.
         bool term(string s)
        {
            bool res = false;
            string left;
            int inBracket = 0;
            bool foundBlock = false;
            int iteratorCounter = 1;
            foreach (char c in s)
            {
                if (!foundBlock)
                { 
                    if (iteratorCounter++ == s.Length) // block stands alone no "*" or "/"  + blocks remain 
                    {
                        res = factor(s);
                    }
               
                    if (c.Equals('('))
                    {
                        inBracket++;
                    }
                    else if (c.Equals(')'))          
                    {
                        inBracket--;
                    }
                
                    if (inBracket==0 && c.Equals('*'))  
                    {
                        foundBlock = true;
                        left = s.Substring(0, s.IndexOf("*"));
                        s = s.Substring(s.IndexOf("*") + 1);                            
                        if (factor(left) & term(s))              
                        {
                            res = true;
                        }
                    }
                    else if (inBracket==0 && c.Equals('/'))
                    {
                        foundBlock = true;
                        left = s.Substring(0, s.IndexOf("/"));
                        s = s.Substring(s.IndexOf("/") + 1);
                        if (factor(left) & term(s))
                        {
                            res = true;
                        }
                    }
                }
            }            
            return res;
        }

        /*   Case 1 : 
         *      String is a constant 
         *  Case 2 :
         *      String is a variable
         *  Case 3 : 
         *      String is and expression in brackets     "(" expression ")"
         */
         bool factor(string s)
        {
            bool res = false;
            
            if (s.StartsWith("(") && s.EndsWith(")"))
            {
                string substr = s;
                substr = substr.Substring(1, substr.Length - 2);
                res = parseExpression(substr);
            }
            else if (constant(s))
            {
                res = true;
            }
            else if (variable(s))
            {
                res = true;
            }
            
            
            return res;
        }

        // Checks if string equals "x" or "y" or "z"
         bool variable(string s)
        {
            bool res = false;
            if(s.Equals("x")||s.Equals("y")||s.Equals("z")){
                res = true;
            }
            return res;
        }

        //Check if String is an constant = one ore more digit´s
         bool constant(string s) {
            bool res = true;
            foreach (char c in s)
            {               
                if (!(Char.IsDigit(c)))           
                {
                    res = false;
                }
            }
            return res;
        } 
    }
}
