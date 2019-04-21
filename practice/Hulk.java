/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cp;

import java.util.Iterator;
import java.util.Scanner;
import java.util.TreeSet;

/**
 *
 * @author asmin
 */
public class Hulk {
//    public static void main(String[] arg){
//        Scanner scan=new Scanner(System.in);
//        int n=scan.nextInt();
//        TreeSet<Integer> B=new TreeSet<>();
//        TreeSet<Integer> R=new TreeSet<>();
//        TreeSet<Integer> P=new TreeSet<>();
//        
//        for(int i=0;i<n;i++){
//            int x=scan.nextInt();
//            char c=scan.nextLine().trim().charAt(0);
//            if(c=='R')
//                R.add(x);
//            else if(c=='B')
//                B.add(x);
//            else if(c=='P')
//                P.add(x);
//            
//        }
//        int sum=getCost(B)+getCost(P)+getCost(R);
//        if(P.size()>0){
//            if(B.first()<R.first()){
//                sum+=Math.abs(B.last()-R.first());
//            }
//            else{
//                sum+=Math.abs(R.last()-B.first());
//            }
//        }
//        System.out.println(sum);
//    }
    static int getCost(TreeSet<Integer> set){
        int sum=0;
        Iterator<Integer> it=set.iterator();
        int init=0;
        if(it.hasNext()){
            init=it.next();
        }
        while(it.hasNext()){
            int cur=it.next();
            sum+=Math.abs(cur-init);
            init=cur;
        }
        return sum;
    }
}
