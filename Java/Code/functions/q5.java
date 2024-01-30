package functions;

import java.util.Scanner;

//Write a function that takes in age as input and returns if that person is eligible to vote or not. A person of age > 18 is eligible to vote.
public class q5 {
    public static void isEligible(int age) {
        if(age>18){
            System.out.println("Eligible to vote.");
            return;
        }else{
            System.out.println("Not Eligible");
            return;
        }
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int age= sc.nextInt();
        System.out.print("The person is ");
        isEligible(age);
        sc.close();
    }
}
