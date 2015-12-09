using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using Parser;

namespace Parser
{
    public class Reader
    {
        static StreamReader streamReader;
        

        static void Main(string[] args)
        {
            read("C:\\Users\\Niko\\Documents\\GitRepo\\csharp\\Parser\\Parser\\expressions.txt");
            string s = getline();
           // Thread th = new Thread();
           // Console.WriteLine(Parser.parseExpression(s)+ " : "+ s);
            var p = new Parser();
            while(true){
                Console.WriteLine(p.parseExpression(s) + " : " + s);
                s = getline();
            }
            Console.ReadKey();
        }
        static void read(string path)
        {

            string line;
            int i = 0;
            streamReader = new StreamReader(path);
        }

        static string getline()
        {
            string res;
            do
            {
                res = streamReader.ReadLine();
            } while (!(res != null));
            if(res == null){
                streamReader.Close();
                res = "";
            }
            return res;
        }
    }
}
