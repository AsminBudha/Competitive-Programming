/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cp;

import java.util.Arrays;
import java.util.Scanner;
import java.util.TreeSet;

/**
 *
 * @author asmin
 */
public class B {
    static TreeSet<Integer> arr;
    static int[] dp;
//    public static void main(String[] args) {
//        // TODO code application logic here
//        Scanner scan=new Scanner(System.in);
//        int t=scan.nextInt();
//        while(t-->0){
//            int n=scan.nextInt();
//            int k=scan.nextInt();
//            arr=new TreeSet<>();
//            dp=new int[k+1];
//            Arrays.fill(dp, -1);
//            for(int i=0;i<n;i++){
//                arr.add(scan.nextInt());
//            }
//            int ans=k-check(k);
//            System.out.println(ans);
//        }
//    }
    
    static int check(int k){
//        System.out.print(k+" ");
        if(k==0){
            return dp[k]=0;
        }
        if(dp[k]!=-1) return dp[k];
        int ans=k;
        for(Integer num:arr){
            if(k-num>=0)
                ans=Math.min(ans, check(k-num));
        }
//        System.out.println(k+"->"+ans);
        return dp[k]=ans;
    }
}
