import java.util.Random;

public class main {

	public static void main(String[] args) {
		int size = 10;
		int anzConsumer = 10;
		Consumer c1= new Consumer();
		Producer p1= new Producer();
		Consumer c2= new Consumer();
		Consumer c3= new Consumer();
		Consumer c4= new Consumer();
		Consumer c5= new Consumer();
		
		Buffer b = new Buffer(size);
	
		Thread cT1= new Thread(c1);
		Thread cT2= new Thread(c1);
		Thread cT3= new Thread(c1);
		Thread cT4= new Thread(c1);
		Thread cT5= new Thread(c1);
		Thread pT1= new Thread(p1);
			
		cT1.start();
		cT1.start();
		cT1.start();
		cT1.start();
	}

}
