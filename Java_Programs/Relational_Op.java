import java.util.*;

class Relational_Op{
    public static void main(String args[]){
        Scanner imp = new Scanner(System.in);
        int a,b;
        System.out.println("Enter a,b: ");
        a = imp.nextInt();
        b = imp.nextInt();
        if(a<b){
            System.out.println(a + " is smaller than "+ b);
        }else{
            System.out.println(b + " is smaller than "+ a);
        }
    }
}