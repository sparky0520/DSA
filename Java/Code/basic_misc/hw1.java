package basic_misc;
//Make a Calculator. Take 2 numbers (a & b) from the user and an operation as follows :
//        1 : + (Addition) a + b
//        2 : - (Subtraction) a - b
//        3 : * (Multiplication) a * b
//        4 : / (Division) a / b
//        5 : % (Modulo or remainder) a % b
//        Calculate the result according to the operation given and display it to the user.

import java.util.*;

public class hw1 {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int operation= sc.nextInt();
        switch (operation){
            case 1:
                int sum = a+b;
                System.out.println(sum);
                break;
            case 2:
                int dif = a-b;
                System.out.println(dif);
                break;
            case 3:
                int mul = a*b;
                System.out.println(mul);
                break;
            case 4:
                int quo = a/b;
                System.out.println(quo);
                break;
            case 5:
                int mod = a%b;
                System.out.println(mod);
                break;
            default:
                System.out.println("Enter valid input!!!");
        }
        sc.close();
    }
}
