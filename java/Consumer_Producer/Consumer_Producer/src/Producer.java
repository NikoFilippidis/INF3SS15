import java.util.Random;

public class Producer implements Runnable{
	private static Buffer b = new Buffer(0);
	
	public void produceInt(Buffer a){
		Buffer b = a;
		Random r= new Random();
		
		for (int i = 0; i < b.getSize(); i++) {
			b.einreihen(r.nextInt(6));
		}
	}
	
	public void produceBool(Buffer a){
		Buffer b = a;
		Random r= new Random();
		
		for (int i = 0; i < b.getSize(); i++) {
			b.einreihen(r.nextBoolean());
		}
	}

	@Override
	public void run() {
		 
	}
}
