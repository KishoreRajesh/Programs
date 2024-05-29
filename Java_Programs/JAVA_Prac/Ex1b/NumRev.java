import java.io.*;
import java.util.Scanner; class NumRev
{
public static void main(String args[])
{
int n,rev=0;
System.out.println(" Number Reverse Program In Java "); System.out.print(" Enter a number : ");
Scanner inp = new Scanner (System.in); n = inp.nextInt();
while(n!=0)
{
rev=rev*10; 
rev=rev+n%10; 
n=n/10;
}
System.out.println("Reversed number is : "+rev);
}
}
 
		

