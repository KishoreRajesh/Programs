
import java.util.*;

class Avg {
    public static void main(String[] args){
        int n,total = 0,avg = 0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter no of elements: ");
        n = in.nextInt();
        int a[] = new int[n];
        System.out.println("Enter elements: ");
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        for(int i=0;i<n;i++){
            total += a[i];
        }
        avg = total/n;
        System.out.println("Average = "+ avg);
        in.close();
    }
}


