package functions;

import java.util.Scanner;

//Write a function that takes in the radius as input and returns the circumference of a circle.
public class q4 {
    public static double circ(int radius) {
        double circumference = 2*(Math.PI)*radius;
        return circumference; 
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int radius = sc.nextInt();
        System.out.println("The circumference is : "+circ(radius));
        sc.close();
    }
}
