import java.util.*;

class TreeSetdemo{
	public static void main(String[] args){
		TreeSet ts = new TreeSet();	
		ts.add("c");
		ts.add("a");
		ts.add("d");
		ts.add("e");
		ts.add("c");
		ts.add("f");
		System.out.println(ts);
	}
}