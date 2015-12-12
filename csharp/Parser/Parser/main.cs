using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Collections.Generic;
using System.IO;


namespace Parser
{
    class main {

        static void Main(string[] args)
        {
            var reader = new Reader("C:\\Users\\Niko\\Documents\\GitRepo\\csharp\\Parser\\Parser\\expressions.txt");
            System.Threading.ThreadPool.QueueUserWorkItem(reader.parseDocument);
       
            Console.ReadKey();
        }
    }
}
