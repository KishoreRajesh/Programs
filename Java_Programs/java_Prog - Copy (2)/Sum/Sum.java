import java.io.*;
import java.util.*;

class Sum{
	public static void main(String[] main){
		int n = 67;
		System.out.println("Value to be added = "+n);
		int r = 0;
		int Sum = 0;
		while(n!=0){
			r = n%10;
			n = n/10;
			Sum = Sum + r;
		}
		System.out.println("Sum of the value = "+Sum);
	}
}