
public class Counter implements Runnable {
	private static Liste s;
	private int counter=0;
	public Counter(Liste a) {
		s=a;
	}
	
	@Override
	public void run() {
		String a;
		
		for (int i = 0; i < s.getGroesse(); i++) {
			a = s.getNext();
			if (a.endsWith(".edu")) {
				counter++;
			}
			
		}
		System.out.println("There are " +counter+ " eMails ending with '.edu'");
	}

}
