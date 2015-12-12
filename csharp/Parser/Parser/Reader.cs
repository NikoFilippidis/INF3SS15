using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.IO;

namespace Parser
{
    public class Reader
    {
        static StreamReader streamReader; 
        static Parser parser=new Parser();
 
        static bool isClosed = false;
        static bool done = false;

        public Reader(string s ) {
            streamReader = new StreamReader(s);
             
        }

        //Is reading every line of the document sends it to the parser and prints the result.
        public void parseDocument(Object stateInfo)
        {
            string s = "";
            while (!done) {
                if (!isClosed)
                {
                    if ((s = streamReader.ReadLine()) != null)
                    {
                        Console.WriteLine(parser.parseExpression(s) + " : " + s);
                        
                    }
                    else
                    {
                        streamReader.Close();
                        isClosed = true;
                        done = true;
                    }
                }
            }
        }


        static string getLine() {
            string res = null;
            string s;
            if(!isClosed){
                
               if((s = streamReader.ReadLine()) != null){
                   res = s;
               }
               else
               {
                   streamReader.Close();
                   isClosed = true;
                   done = true;
               }
            }
            return res;
        }
    }
}
