import java.util.ArrayList;

public class Liste {
	private static ArrayList<String> gemeinsameListe = new ArrayList<>();
	public int counter  = -1 ;
	
	public void speicherMail(String zeile) {
		//System.out.println(zeile);
		gemeinsameListe.add(zeile);
	}
	
	public int getGroesse(){
		return gemeinsameListe.size();
	}
	
	public String getNext(){
		counter++;
		return gemeinsameListe.get(counter);
	}
	
}
