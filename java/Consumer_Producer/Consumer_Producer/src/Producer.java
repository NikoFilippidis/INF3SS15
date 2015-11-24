import java.util.Random;

public class Producer implements Runnable{
	private static Buffer b = new Buffer(0);
	private static boolean binDabei= false;

	
	public void setBuffer(Buffer a){
		 b = a;
	}
	
	public void produceBool(Buffer a){
		 b = a;
		Random r= new Random();
		
		for (int i = 0; i < b.getSize(); i++) {
			b.einreihen(r.nextBoolean());
		}
	}

	@Override
	public void run() {
		synchronized (b) {
			
		
			Random r= new Random();
			for (int i = 0; i < b.getSize(); i++) {
				b.einreihen(r.nextInt(6));
			}
		}
	}
}
