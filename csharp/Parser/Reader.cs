using System;

public class Reader
{
    List<string> lines = new List<string>();
	public Reader(string path)
	{
        string line;
        StreamReader file = new StreamReader(path);

        while ((line = file.ReadLine()) != null)
        {
            lines.Add(line);
            i++;
        }
        file.Close();
	}
}
