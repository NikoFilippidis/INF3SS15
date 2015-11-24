
public class Consumer implements Runnable{
	private static Buffer b = new Buffer(0);

		
	public void setBuffer(Buffer a){
			b = a;
		}

		@Override
		public void run() {
			synchronized (b) {
				for (int i = 0; i < b.getSize(); i++) {
					System.out.println(b.gibNextElement());
				}
			}
		}
		

}
