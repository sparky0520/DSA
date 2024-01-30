package basic_misc;
// Print the sum of the first n natural numbers
import java.util.*;
public class q5 {
    public static void main(String args[]){
        int sum =0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=1; i<=n; i++){
            sum += i;
        }
        System.out.println(sum);
        sc.close();
    }
}
