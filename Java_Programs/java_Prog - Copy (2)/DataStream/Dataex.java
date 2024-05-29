import java.io.*;

class Dataex{
	public static void main(String[] args)throws IOException{
		DataInputStream d = new DataInputStream(System.in);
		System.out.println("Enter Two numbers : ");
		int a = Integer.parseInt(d.readLine());
		int b = Integer.parseInt(d.readLine());
		System.out.println("Enter String: ");
		String S = d.readLine();
		System.out.println("Sum = "+(a+b));
		System.out.println("Name = "+S);
	}
}