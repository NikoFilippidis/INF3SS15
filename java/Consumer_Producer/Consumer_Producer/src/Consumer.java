
public class Consumer implements Runnable{
		public void consume(Buffer b){
			for (int i = 0; i < b.getSize(); i++) {
				System.out.println(b.gibNextElement());
			}
		}

		@Override
		public void run() {
			
		}
}
