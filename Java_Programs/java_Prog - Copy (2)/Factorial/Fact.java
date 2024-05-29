import java.io.*;
import java.util.*;

class Fact{
	public static void main(String[] args){
		int a = 5;
		System.out.println("Given Value = " + a);
		int ans = 1;
		for(int i = 1; i<=5;i++){
			ans = ans*i;
		}
		System.out.println("Answer for the give Factorial = " + ans);
	}
}	