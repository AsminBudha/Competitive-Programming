/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cp;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author asmin
 */
public class C979 {
//    public static void main(String[] arg) {
//        Scanner scan = new Scanner(System.in);
//        int n=scan.nextInt();
//        int a=scan.nextInt();
//        int b=scan.nextInt();
//        HashMap<Integer,List<Integer>> g=new HashMap<>();
//        for(int i=1;i<=n;i++){
//            g.put(i, new ArrayList<>());
//        }
//        for(int i=1;i<n;i++){
//            int x=scan.nextInt(),y=scan.nextInt();
//            List<Integer> list1=g.get(x);
//            list1.add(y);
//            g.put(x, list1);
//            
//            List<Integer> list2=g.get(y);
//            list2.add(x);
//            g.put(y, list2);
//            
//            
//        }
//        
//        Queue<Integer> q=new LinkedList<>();
//        q.add(1);
//        boolean[] unvisited=new boolean[n+1];
//        Arrays.fill(unvisited, true);
//        unvisited[1]=false;
//        int ans=0;
//        int[] len=new int[n+1];
//        int end=1;
//        while(!q.isEmpty()){
//            Integer u=q.remove();
//            end=u;
//            List<Integer> list=g.get(u);
//            
//            for(Integer i:list){
//                if (unvisited[i]) {
//                    q.add(i);
//                    unvisited[i]=false;
//                }
//            }
//        }
//        q.add(end);
//        Arrays.fill(unvisited, true);
//        unvisited[end]=false;
//        while(!q.isEmpty()){
//            Integer u=q.remove();
//            
//            List<Integer> list=g.get(u);
//            
//            for(Integer i:list){
//                if (unvisited[i]) {
//                    q.add(i);
//                    ans+=2;
//                    unvisited[i]=false;
//                    len[i]=len[u]+1;
//                    if(len[i]>1){
//                        ans+=2;
//                    }
//                }
//            }
//        }
//        int s=g.get(a).size();
//        ans-=s;
//        System.out.println(ans);
//        
//    }
}
