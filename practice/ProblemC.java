/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cp;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Scanner;
import java.util.TreeMap;
import java.util.TreeSet;

/**
 *
 * @author asmin
 */
public class ProblemC {

    static class Pair implements Comparable<Pair> {

        int l, r;

        public Pair(int x, int y) {
            this.l = x;
            this.r = y;
        }

        @Override
        public int compareTo(Pair o) {
            if(this.l==o.l)
                return this.r<o.r?-1:1;
            return this.l < o.l ? -1 : 1;
        }
    }
    static List<Pair> list = new ArrayList<>();
    static HashMap<Pair,Integer> map=new HashMap<>();
    static TreeMap<Integer,TreeSet<Integer>> pairs=new TreeMap<>();

//    public static void main(String[] arg) {
//        Scanner scan = new Scanner(System.in);
//        int t = scan.nextInt();
//
//        for (int i = 0; i < t; i++) {
//            int x = scan.nextInt();
//            int y = scan.nextInt();
//            Pair p=new Pair(x, y);
//            map.put( p,i+1);
//            list.add(p);
//            
//        }
//        Collections.sort(list);
//        for(int i=0;i<t-1;i++){
//            int s=search(i+1, t-1, i);
//            if(s!=-1){
//                System.out.println(map.get(list.get(s))+" "+map.get(list.get(i)));
//                return;
//            }
//        }
//        System.out.println((-1)+" "+(-1));
//    }

    static int search(int l, int r, int i) {
        
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (list.get(mid).r <= list.get(i).r) {
                return mid;
            }
            else {
                r = mid - 1;
            }
        }
        return -1;
    }
}
