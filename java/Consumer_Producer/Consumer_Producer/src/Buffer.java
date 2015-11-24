

public class Buffer<T> {
	T[] Buf;
	
	Buffer(int size){
		Buf =  (T[]) new Object[size];
	}
	
	public void einreihen(T a){
	boolean saved=false;
		for (int i = 0; i < Buf.length; i++) {
			if (Buf[i] == null && !saved) {
				Buf[i] = a;
				saved=true;
				notifyAll();
			}
		}
	}
	
	public T gibNextElement(){
		T tmp;
		for (int i = 0; i < Buf.length; i++) {
			if (Buf[i]!= null) {
				tmp = Buf[i];
				delElement();
				return tmp;
			}
		}
		return null;
	}
	
	public void delElement() {
		for (int i = 0; i < Buf.length-1; i++) {
			Buf[i] = Buf[i+1];
			Buf[i+1] = null;
		}
	}
	
	public int getSize(){
		return Buf.length;
	}

	public void print(){
		for (int i = 0; i < Buf.length; i++) {
			System.out.println(Buf[i]);
		}
	}

	public boolean istVoll(){
		boolean istVoll=true;
		for (int i = 0; i < Buf.length; i++) {
			if (Buf[i]==null) {
				istVoll=false;
			}
		}
		return istVoll;
	}
	
	public boolean istLeer(){
		boolean istLeer=true;
		for (int i = 0; i < Buf.length; i++) {
			if (Buf[i]!=null) {
				istLeer=false;
			}
		}
		return istLeer;
	}

}
