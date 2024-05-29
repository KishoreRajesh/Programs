import java.io.*;
import java.util.*;

class Palind{
	public static void main(String[] main){
		int n = 353;
		int temp = n;
		System.out.println("Value to be added = "+n);
		int r = 0;
		int Sum = 0;
		while(n!=0){
			r = n%10;
			Sum = (Sum*10)+r;
			n = n/10;
		}
		if(temp == Sum){
			System.out.println("It is a palindrome Value");
		}else{
			System.out.println("It is a not Palindrome Value");
		}
	}
} 