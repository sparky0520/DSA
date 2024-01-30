package functions;

import java.util.Scanner;

//Enter 3 numbers from the user & make a function to print their average.
public class q1 {
    public static float average(int a, int b, int c) {
        float mean = (a+b+c)/3;
        return mean;
    }
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        System.out.println("The mean is : "+average(a, b, c));
        sc.close();
    }
}
