/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cp;

import java.util.List;
import java.util.TreeSet;

/**
 *
 * @author asmin
 */
public class MaxSubPathInBinaryTree {
    static TreeSet<Total> list=new TreeSet<Total>();
    static int[] graph={-100,2,3,4,5,6,7};
    static void find(int best,int sum,int in,int start, int end){
        int left,right;
        int newsum=sum,newbest=best;
        int newstart=start,newend=end;
        int leftmax=0,rightmax=0;
        if((left=2*in+1)<graph.length){
            if(graph[left]>newsum+graph[left]){
                newstart=left;
                newsum=graph[left];
            }
            else{
                newsum+=graph[left];
            }
            if(newbest<newsum){
                newbest=newsum;
                newend=left;
                leftmax=newbest;
            }
            find(newbest, newsum, left, newstart, newend);
        }
        
        if((right=2*in+2)<graph.length){
            if(graph[right]>sum+graph[right]){
                start=right;
                sum=graph[right];
            }
            else{
                sum+=graph[right];
            }
            if(best<sum){
                best=sum;
                end=right;
                rightmax=best;
            }
            find(best, sum, right, start, end);
        }
        if(leftmax>rightmax){
            list.add(new Total(newbest, newstart, newend));
        }
        else{
            list.add(new Total(rightmax, start, end));
        }
        return;
    }
        
        
//    public static void main(String[] arg){
//        
//        list.add(new Total(graph[0],0,0));
//        int sum=graph[0],best=graph[0];
//        int start=0,end=0;
//        find(best, sum, 0, start, end);
//        Total total1=list.pollFirst();
//        Total total2=list.pollFirst();
//        System.out.println(total1.start==total2.start?
//                total1.total+total2.total-graph[total1.start]:total1.total);
//    }
    
    static class Total implements Comparable<Total>{
        int total;
        int start;
        int end;

        public Total(int total, int start, int end) {
            this.total = total;
            this.start = start;
            this.end = end;
        }
        
        @Override
        public int compareTo(Total o) {
            return this.total>o.total?-1:1;
        }
        
    }
}
