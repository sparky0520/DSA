package basic_misc;
// use switch cases to greet
import java.util.*;

public class q3 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter input integer: ");
        int a = sc.nextInt();
        switch (a){
            case 1: System.out.println("Hello");
                break;
            case 2: System.out.println("Namaste");
                break;
            case 3: System.out.println("Bonjour");
                break;
            default: System.out.println("Enter valid input !!!");
        }
        sc.close();
    }
}
