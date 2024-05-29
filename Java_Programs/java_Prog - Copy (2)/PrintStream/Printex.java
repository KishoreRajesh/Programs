import java.io.*;

class Printex{
	public static void main(String[] args){
		PrintWriter p = new PrintWriter(System.out,true);
		p.println("Sample");
		boolean b = true;
		p.println(b);
	}
}