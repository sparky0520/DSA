package functions;
import java.util.Scanner;

// To find the factorial of a number
public class factorial {
    public static int factorialCal(int n) {
        if(n==1){
            return 1;
        }
        else{    
            return (n*factorialCal(n-1));
        }
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if(num==1 || num ==0){
            System.out.println("Factorial is : "+1);
        }
        else if(num<0){
            System.out.println("Enter valid input !");
        }
        else{
            System.out.println("The factorial is : "+factorialCal(num));
        }
        sc.close();
    }
}
