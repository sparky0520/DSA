package functions;

import java.util.Scanner;

//Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered. 
public class q7 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int positive=0;
        int negative=0;
        int zero=0;
        int n;
        String ques;
        while(true){
            n = sc.nextInt();
            if(n >0){
                positive++;
            }else if( n<0){
                negative ++;
            }else{
                zero++;
            }
            System.out.print("Do you want to quit ? (y/n) : ");
            ques = sc.next();
            if(ques.equals("n") || ques.equals("N")){
                System.out.println("The number of positive numbers is "+positive);
                System.out.println("The number of negative numbers is "+negative);
                System.out.println("The number of zeroes is "+zero);
                break;
            }else{
                continue;
            }
        }
        sc.close();
    }    
}
