
public class Consumer implements Runnable{
	private static Buffer b = new Buffer(0);

		
	public void setBuffer(Buffer a){
			b = a;
		}

		@Override
		public void run() {
			synchronized (b) {
				try {
					b.wait(); 
				} catch (Exception e) {
					// TODO: handle exception
				}
				System.out.println("Consumer : "+ System.currentTimeMillis());
				if (b.getSize()==1) {
					System.out.println(b.gibNextElement());	
				}else{
					for (int i = 0; i < b.getSize(); i++) {
						System.out.println(b.gibNextElement());
					}
				}
			}
		}
		

}
