package DSA;
import java.util.Scanner;

public class sal{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int sal = in.nextInt();
        if(sal > 10000){
            sal += 2000;
        }else{
            sal += 1000;
        }
        System.out.println(sal);
    }
}
