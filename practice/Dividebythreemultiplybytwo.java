/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cp;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author asmin
 */
public class Dividebythreemultiplybytwo {

    static List<Long> set = new ArrayList<>();
    static List<Long> list=new ArrayList<>();
    static boolean check( boolean[] visited, long num) {

        if (list.size() == set.size()) {
            return true;
        }

        boolean div = false;
        int index = -1;
        if (num % 3 == 0 && ((index = Collections.binarySearch(set, num / 3)) >= 0)) {

            visited[index] = true;
            list.add(num/3);
            div = check( visited, num / 3);
            if (div) {
                return true;
            }
            list.remove(num/3);
            visited[index] = false;
        }

        if (((index = Collections.binarySearch(set, num * 2)) >= 0)) {
            visited[index] = true;
            list.add(num*2);
            boolean mul = check( visited, num * 2);
            if (mul) {
                return true;
            }
            list.remove(num*2);
            visited[index] = false;
        }

        return false;
    }

//    public static void main(String[] arg) {
//        Scanner scan = new Scanner(System.in);
//        int n = scan.nextInt();
//
//        for (int i = 0; i < n; i++) {
//            set.add(scan.nextLong());
//        }
//        Collections.sort(set);
//
//        for (int i = 0; i < n; i++) {
//            list.clear();
//            list.add(set.get(i));
//            boolean[] visited=new boolean[n];
//            visited[i]=true;
//            if(check(visited, set.get(i))){
//                for(Long l:list){
//                    System.out.print(l+" ");
//                }
//                break;
//            }
//        }
//    }
}
