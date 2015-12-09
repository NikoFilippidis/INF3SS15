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
        static bool isClosed=false;
        private static Object thisLock = new Object();
        static void Main(string[] args)
        {
           // streamReader = new StreamReader("C:\\Users\\Niko\\Documents\\GitRepo\\csharp\\Parser\\Parser\\expressions.txt"); 
            streamReader = new StreamReader("expressions.txt"); 
            Thread[] t = new Thread[3];
            for (int i = 0; i < 3; i++)
            {
               t[i] = new Thread(run);
               t[i].Start();
            }
           
            Console.ReadKey();
           
        }


        static void run() {
            lock (thisLock)
            {
                var p = new Parser();
                if(!isClosed){
                    string s = streamReader.ReadLine();

                    while (s != null)
                    {
                        Console.WriteLine(p.parseExpression(s) + " : " + s);
                        s = streamReader.ReadLine();

                    }
                 }
                streamReader.Close(); 
                isClosed = true;
            }      
        }
 
    }
}
