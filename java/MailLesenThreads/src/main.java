

public class main {
	
	
	public static void main(String[] args) {

		
		
		Liste s=new Liste();
		
		
		readAndSave r1 = new readAndSave("mails1.txt",s);
		readAndSave r2 = new readAndSave("mails2.txt",s);
		Thread[] t = new Thread[2];
		t[0] = new Thread(r1);
		t[1] = new Thread(r2);
		
		t[0].start(); 
		t[1].start();
		
		Counter c = new  Counter(s);
		Thread t3 = new Thread(c);
		
		
		try {
			for (Thread thread : t) {
				  thread.join();
			}
			t3.start();
			
		} catch (Exception e) {
			// TODO: handle exception
		}
	}

}
