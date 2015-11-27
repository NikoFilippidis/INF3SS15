import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class readAndSave implements Runnable {
	private static String p;
	private static Liste s;
	
	public readAndSave(String path, Liste e) {
		p = path;
		s=e;
	}	
	
	@Override
	public void run() {
		FileReader fr;
		BufferedReader br = null;
		String zeile = "";
		synchronized (s) {
			try {
				fr = new FileReader(p);
				br = new BufferedReader(fr);
				do
			    {
			      zeile = br.readLine();
			      
			      if (zeile != null) {
			    	  //System.out.println(zeile);
			    	  s.speicherMail(zeile);
			      }
			    }
			    while (zeile != null);
		
			    br.close();
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}

}
