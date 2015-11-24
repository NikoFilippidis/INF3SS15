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
		ConTH.start();		
	}

}
