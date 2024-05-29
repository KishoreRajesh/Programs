import java.util.*;
	
class ArrayListdemo{
	public static void main(String[] args){
		
		ArrayList al = new ArrayList();
		System.out.println("Size of the initial Array: "+al.size());
		al.add("c");
		al.add("a");
		al.add("e");
		al.add("b");
		al.add("d");
		al.add("f");
		al.add(1,"a2");
		System.out.println("Size of al After adding : "+al.size());
		System.out.println("Contents of al : "+al);
		al.remove("f");
		al.remove(2);
		System.out.println("Size of al after deletion : "+al.size());
		System.out.println("Contents of al : "+al);
	}
}
	