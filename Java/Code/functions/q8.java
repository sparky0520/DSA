package functions;
//Two numbers are entered by the user, x and n. 
//Write a function to find the value of one number 
//raised to the power of another i.e. xn.

import java.util.Scanner;

public class q8 {
    public static double power(int x, int n) {
        double ans = Math.pow(x, n);
        return ans;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int x =sc.nextInt();
        int n= sc.nextInt();
        System.out.println("The answer is : "+power(x, n));
        sc.close();
    }
}
