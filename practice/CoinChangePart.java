/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cp;

import java.util.Arrays;

/**
 *
 * @author asmin
 */
public class CoinChangePart {

    static int[] count(int S[], int m, int n) {
        
        int[] table = new int[n + 1];
        int[] coins=new int[n+1];
        table[0] = 1;
        
        for (int i = 0; i < m; i++) {
            for (int j = S[i]; j <= n; j++) {
                table[j] += table[j - S[i]];
                coins[j]+=table[j-S[i]]+1;
            }
        }

        return coins;
    }
    
    static long countWays(int S[], int m, int n)
    {
        //Time complexity of this function: O(mn)
        //Space Complexity of this function: O(n)
 
        // table[i] will be storing the number of solutions
        // for value i. We need n+1 rows as the table is
        // constructed in bottom up manner using the base
        // case (n = 0)
        long[] table = new long[n+1];
 
        // Initialize all table values as 0
        Arrays.fill(table, 0);   //O(n)
 
        // Base case (If given value is 0)
        table[0] = 1;
 
        // Pick all coins one by one and update the table[]
        // values after the index greater than or equal to
        // the value of the picked coin
        for (int i=0; i<m; i++)
            for (int j=S[i]; j<=n; j++)
                table[j] += table[j-S[i]];
 
        return table[n];
    }
    
//    public static void main(String[] arg) {
//        int arr[] = {1, 2, 3};
//        int m = arr.length;
//        int n = 4;
//        int[] coins=count(arr, m, n);
//        for(int i=0;i<coins.length;i++){
//            System.out.println(i+"->"+coins[i]);
//        }
//    }
}
