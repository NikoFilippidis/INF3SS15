
public class Consumer implements Runnable{
	private static Buffer b = new Buffer(0);

		
	public void setBuffer(Buffer a){
			b = a;
		}

		@Override
		public void run() {
			synchronized (b) {
				do {
					if (!b.istLeer()) {
						System.out.println("Consuming "+b.gibNextElement());
					}	
				} while (!b.istLeer());
				if (b.istLeer()) {
					System.out.println("Buffer empty consumer waiting.");
				}
			}
			
		}
		

}
