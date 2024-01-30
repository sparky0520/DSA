package basic_misc;
// Add two numbers given input by user
import java.util.*;
class q2{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter integer: ");
        int a = sc.nextInt();
        System.out.print("Enter floating point number: ");
        float b = sc.nextFloat();
        float sum = a+b;
        System.out.println(sum);
        sc.close();
    }
}