import java.io.*;
import java.util.*;

class Exception{
	public static void main(String[] args){
		try{
			int a = 10,b,c = 0;
			b = a/c;
		}
		catch(ArithmeticException e){
			System.out.println(e);
		}	
	}
}