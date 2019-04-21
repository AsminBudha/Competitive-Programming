/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cp;

import java.util.Scanner;

/**
 *
 * @author asmin
 */
public class SpaceB {
    public static void main(String[] arg){
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        scan.nextLine();
        String str=scan.nextLine();
        
        int total=0;
        for(int i=0;i<n;i++){
            if(str.charAt(i)=='x'){
                int count=0;
                while(i<n && str.charAt(i++)=='x'){
                    count++;
                }
                total+=count-2;
            }
        }
        
        System.out.println(n-total);
        
    }
}
