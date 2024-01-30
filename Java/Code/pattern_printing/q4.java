package pattern_printing;
import java.util.*;
public class q4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=1; i<=n; i++){
            for(int j=0; j<(n-i); j++){
                System.out.print(" ");
            }
            for(int k=i; k>=1; k--){
                System.out.print(k);
            }
            for(int l=2; l<=i; l++){
                System.out.print(l);
            }
            for(int j=0; j<(n-i); j++){
                System.out.print(" ");
            }
            System.out.print("\n");
        }
        sc.close();
    }
}
