package functions;

import java.util.Scanner;

//Make a function to check if a number is prime or not.
public class prime {
    public static boolean isPrime(int n) {
        for(int i=2; i<=Math.pow(n,0.5); i++){
            if(n%i ==0){
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if(isPrime(num)){
            System.out.println("The number is prime.");
        }else{
            System.out.println("The number is composite.");
        }
        sc.close();
    }
}
