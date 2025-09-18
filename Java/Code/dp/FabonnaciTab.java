package dp;

import java.util.Scanner;

public class FabonnaciTab {

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        int dp[] = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        System.out.println("Fabonnaci number " + n + ": " + dp[n]);
        sc.close();
    }
}
