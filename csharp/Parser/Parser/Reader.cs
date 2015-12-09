using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace Parser
{
    public class Reader
    {
        List<string> lines = new List<string>();
        public Reader(string path)
        {

            string line;
            int i = 0;
            StreamReader file = new StreamReader(path);

            while ((line = file.ReadLine()) != null)
            {
                lines.Add(line);
                i++;
            }
            file.Close();
        }
        object getLines()
        {
            return lines;
        }

    }
}
