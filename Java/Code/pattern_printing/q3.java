package pattern_printing;
import java.util.*;
public class q3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=1; i<=n; i++){
            for(int j=0; j<(n-i); j++){
                System.out.print(" ");
            }
            for(int k=0; k<i; k++){
                System.out.printf("%d ",i);
            }
            for(int j=0; j<(n-i); j++){
                System.out.print(" ");
            }
            System.out.print("\n");
        }
        sc.close();
    }
}
