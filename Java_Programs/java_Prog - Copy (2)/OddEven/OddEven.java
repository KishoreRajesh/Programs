import java.io.*;
import java.util.*;

class OddEven{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		if((a%2) != 1){
			System.out.println("Even");
		}else{
			System.out.println("Odd");
		}
	}
}