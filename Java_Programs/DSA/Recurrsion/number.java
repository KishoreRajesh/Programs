package DSA.Recurrsion;

// Without Recursion

/*public class number {
    public static void main(String[] args) {
        print(1);
    }

    public static void print(int n){
        System.out.println(n);
        print1(2);
    }
    public static void print1(int n){
        System.out.println(n);
        print2(3);
    }
    public static void print2(int n){
        System.out.println(n);
        print3(4);
    }
    public static void print3(int n){
        System.out.println(n);
        print4(5);
    }
    public static void print4(int n){
        System.out.println(n);

    }
}*/


// With Recursion

public class number{
    public static void main(String[] args) {
        print(1);
    }
    public static void print(int n){
        if(n==5){
            System.out.println(5);
            return ;
        }
        System.out.println(n);
        print(n+1);
    }
}
 