package functions;

import java.util.Scanner;

//Write a function to print the sum of all odd numbers from 1 to n.
public class q2 {
    public static int sum(int n) {
        int sum = 0;
        for(int i=1; i<=n; i++){
            sum +=i;
        }
        return sum;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("The sum is : "+sum(n));
        sc.close();
    }
}
