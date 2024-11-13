import java.util.*;
 
class Inputs{
    public static void main(String args[]){
        int a; float b; String c; double d; String e;
        Scanner inp=new Scanner(System.in); System.out.print("\nEnter an Integer number : "); a=inp.nextInt();
        System.out.print("Enter a Float number : "); b=inp.nextFloat();
        System.out.print("Enter a String : "); c=inp.next();
        System.out.print("Enter a Double number : "); d=inp.nextDouble();
        System.out.print("Enter a Line : "); e=inp.nextLine();
        e=inp.nextLine(); 
        System.out.println("\nThe variables are ");
        System.out.println("\nInteger a = "+a); 
        System.out.println("\nFloat b = "+b); 
        System.out.println("\nString c = "+c); 
        System.out.println("\nDouble d = "+d); 
        System.out.println("\nLine e = "+e);
        inp.close();
    }
 
}