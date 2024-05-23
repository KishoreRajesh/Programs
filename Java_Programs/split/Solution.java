import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        scan.close();
        s = s.trim();
        
        if (s.length() == 0) {œ
            System.out.println(0);
        } else {
            // Splitting the string into tokens and printing the number of tokens
            String[] tokens = s.split("[ !,?._'@]+");
            System.out.println(tokens.length);
            
            // Printing each token on a new line
            for (String token : tokens) {
                System.out.println(token);
           }
    }
 }
}