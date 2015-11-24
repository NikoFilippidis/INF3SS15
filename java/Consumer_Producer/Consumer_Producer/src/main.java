import java.util.Random;

public class main {

	public static void main(String[] args) {
		int size = 10;
		
		Buffer b = new Buffer(size);
		Producer producer = new Producer();
		Consumer consumer = new Consumer();
		
		Thread ProdTH = new Thread(producer);
		Thread ConTH = new Thread(consumer);
		producer.setBuffer(b);
		consumer.setBuffer(b);
			
		ProdTH.start();
		
		try {
			Thread.sleep(1000);
			ConTH.start();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}			
	}

}
