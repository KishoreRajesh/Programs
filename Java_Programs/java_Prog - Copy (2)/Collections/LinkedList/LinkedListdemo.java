import java.util.*;
	
class LinkedListdemo{
	public static void main(String[] args){
		LinkedList ll = new LinkedList();
		ll.add("b");
		ll.add("a");
		ll.addLast("c");
		ll.add("d");
		ll.add("e");
		ll.addFirst("Q");
		System.out.println("Size of ll : "+ll.size());
		System.out.println("Contents of ll : "+ll);
		ll.remove("d");
		ll.remove(2);
		System.out.println("Contents of ll after Deletion : "+ll);
		Object val = ll.get(2);
		ll.set(2,(String)val+"changed");
		System.out.println("ll after Change: "+ll);
	}

}