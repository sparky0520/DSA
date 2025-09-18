package dp;

import java.util.Arrays;
import java.util.Scanner;

class FabonnaciMemo {

    static int fabonnaci(int n, int dp[]) {
        if (n <= 1) {
            return 1;
        } else if (dp[n] != -1) {
            return dp[n];
        } else {
            return dp[n] = fabonnaci(n - 1, dp) + fabonnaci(n - 2, dp);
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        n = sc.nextInt();

        int dp[] = new int[n + 1];
        Arrays.fill(dp, -1);

        System.out.println("Fabonnaci number " + n + ": " + fabonnaci(n, dp));
        sc.close();
    }
}
