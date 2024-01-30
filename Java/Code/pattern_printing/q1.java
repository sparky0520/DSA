package pattern_printing;
import java.util.*;
public class q1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        for(int i=1; i<=n; i++){
            for(int j=0; j<i; j++){
                System.out.print("*");
            }
            for(int k=0; k<2*(n-i); k++){
                System.out.print(" ");
            }
            for(int j=0; j<i; j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }
        for(int i=n; i>=1; i--){
            for(int j=0; j<i; j++){
                System.out.print("*");
            }
            for(int k=0; k<2*(n-i); k++){
                System.out.print(" ");
            }
            for(int j=0; j<i; j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }        
        sc.close();
    }
}
