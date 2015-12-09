using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System;
using System.Text.RegularExpressions;

namespace Parser
{
    class Program
    {
        static void Main(string[] args)
        {
  
            Console.WriteLine(term("(2+3)*(1+13)"));
    
            Console.ReadKey();
        }

        static bool parseExpression(string s){
            Console.WriteLine("Expresion : " + s);
                bool res=false;
           return res;
        }

        static bool term(string s)
        {
            bool res = false;
            string left;
            string right;
            bool inBracket = false;
            int iteratorCounter = 0;
            foreach (char c in s)
            {
                
                if (iteratorCounter++ == s.Length) // block stands alone no "*" or "/"  + blocks remain 
                {
                    res = factor(s);
                }
               
                if (c.Equals('('))
                {
                    inBracket = true;
                }
                else if (c.Equals(')'))          
                {
                    inBracket = false;
                }
                
                if (!inBracket && c.Equals('*'))  
                {
                    left = s.Substring(0, s.IndexOf("*"));
                    right = s.Substring(s.IndexOf("*") + 1);
                    //Console.WriteLine(right);                 
                    if (factor(left) & term(right))              
                    {
                        res = true;
                    }                 
                }else if (!inBracket && c.Equals('/')){
                    left = s.Substring(0, s.IndexOf("/"));
                    right = s.Substring(s.IndexOf("/") + 1);
                    if (factor(left) & term(right))
                    {
                        res = true;
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
        static bool factor(string s)
        {
            bool res = false;
            if (constant(s))
            {
                res = true;
            }
            else if (variable(s))
            {
                res = true;
            }
            else if (s.StartsWith("(") && s.EndsWith(")"))
            {
                string substr = s;
                substr = substr.Substring(1, substr.Length - 2);
                res = parseExpression(substr);
            }
            
            return res;
        }
        // Checks if string equals "x" or "y" or "z"
        static bool variable(string s)
        {
            bool res = false;
            if(s.Equals("x")||s.Equals("y")||s.Equals("z")){
                res = true;
            }
            return res;
        }
        //Check if String is an constant = one ore more digit´s
        static bool constant(string s) {
            bool res = true;
            foreach (char c in s)
            {
                if (!(isDigit(c.ToString())))
                {
                    res = false;
                }
            }
            return res;
        }
        //Checks if the String is an digit 
        static bool isDigit(string s) {
            
            bool res = false;
            Regex regex = new Regex("^[0-9]");
            Match match = regex.Match(s);
            if (match.Success)
            {
                res = true;
            }
            return res;
            
        }
    }
}
