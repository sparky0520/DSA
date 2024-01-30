package functions;

import java.util.Scanner;

//Write a program to print Fibonacci series of n terms 
//where n is input by user :
//0 1 1 2 3 5 8 13 21 ..... 
//In the Fibonacci series, a number is the sum of the previous
// 2 numbers that came before it.
//(BONUS)
public class q10 {
    public static void fibonacci(int n) {
        int num1 =1;
        int num2 =2;
        int numTemp;
        System.out.print(num1+" "+num2+" ");
        for(int i = 0; i<(n-2); i++){
            numTemp = num2;
            num2 = num2 + num1;
            num1 = numTemp;
            System.out.print(num2+" ");
        }
        System.out.print("\n");
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        fibonacci(n);
        sc.close();
    }
}
