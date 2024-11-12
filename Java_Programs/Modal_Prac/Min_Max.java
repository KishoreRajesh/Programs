
import java.util.*;

class Min_Max {
    public static void main(String[] args){
        int n,max = 0;
        int min = 10000000;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no of elements: ");
        n = sc.nextInt();
        int a[] = new int[n];
        System.out.print("\nEnter elements: ");
        for(int i =0;i<n;i++){
            a[i] = sc.nextInt();
        }
        for(int j = 0;j<n;j++){
            if(a[j]<min){
                min = a[j];
            }if(a[j]>max){
                max = a[j];
            }
        }
        System.out.println("Max = "+max+"\n"+"Min= "+min);
        sc.close();
    }
}
