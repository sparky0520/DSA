package basic_misc;
import java.util.Scanner;

public class funcQ {
    public static float sum(float a, float b) {
        float sum = a+b;
        return sum;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        float num1 = sc.nextFloat();
        float num2 = sc.nextFloat();
        System.out.println(sum(num1, num2));
        sc.close();
    }
}
