package functions;

import java.util.Scanner;

//Write a function that calculates the
// Greatest Common Divisor of 2 numbers. (BONUS)
public class q9 {
    public static int hcf(int a, int b) {
        int gcd;
        if(a>b){
            gcd = 1;
            for(int i=1; i<=b; i++){
                if(a%i==0 && b%i ==0){
                    if(i>gcd){
                        gcd =i;
                    }
                }
            }
        }else{
            gcd = 1;
            for(int i=1; i<=a; i++){
                if(a%i==0 && b%i ==0){
                    if(i>gcd){
                        gcd =i;
                    }
                }
            }
        }
        return gcd;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("The gcd is : "+hcf(a, b));
        sc.close();
    }
}
