import java.io.*;
import java.util.*;

class Bitwise{
	public static void main(String[] args){
		int a = 10;
		System.out.println("Bitwise Operations");
		System.out.println("Unary value of A : "+(-a));
		System.out.println("A and 3: "+(a&3));
		System.out.println("A or 3: " + (a|3));
		System.out.println("A xor 5 :" + (a^5));
		System.out.println("Right shift of A :"+(a>>2));
		System.out.println("Left shift of A :" +(a<<2));
		System.out.println("Unsigned Right shift of A :" +(a>>>2));
	}
}