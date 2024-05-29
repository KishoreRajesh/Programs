import java.io.*;
import java.util.*;

class Amstrong{
	public static void main(String[] main){
		int n = 153;
		int temp = n;
		System.out.println("Value to be added = "+n);
		int r = 0;
		int Sum = 0;
		while(n!=0){
			r = n%10;
			Sum = Sum +(r*r*r);
			n = n/10;
		}
		if(temp == Sum){
			System.out.println("It is a Amstrong Value");
		}else{
			System.out.println("It is a not Amstrong Value");
		}
	}
}