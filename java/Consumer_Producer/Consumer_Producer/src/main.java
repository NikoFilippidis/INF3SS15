import java.util.Random;

public class main {

	public static void main(String[] args) {
		int size = 10;
		
		Buffer b = new Buffer(size);
		Producer p = new Producer();
		Consumer c = new Consumer();
		
		Thread th = new Thread(p);
		th.start();
		
		
		
		p.produceInt(b);
		c.consume(b);
		
		p.produceBool(b);
		c.consume(b);
	}

}
