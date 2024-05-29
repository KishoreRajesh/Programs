import java.io.*;

class Bufferex{
	public static void main(String[] args)throws IOException{
		int a,b;
		String str;
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter two No: ");
		a = Integer.parseInt(bf.readLine());
		b = Integer.parseInt(bf.readLine());
		System.out.println("Enter String: ");
		str = bf.readLine();
		System.out.println("Sum = "+(a+b));
		System.out.println("Name = "+str);
	}
}