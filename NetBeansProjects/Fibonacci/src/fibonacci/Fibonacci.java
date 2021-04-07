/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fibonacci;

import java.util.Scanner;

/**
 *
 * @author Sumon
 */
public class Fibonacci {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here 
        int f1=0,f2=1,f3;
        int n;
        System.out.println("How term we want to display\n");
        Scanner input=new Scanner(System.in);
        n=input.nextInt();
        
        System.out.println("Fibonacci sequence is ");
        
       System.out.println(f1+"  "+f2);
       for(int i=2;i<n;i++)
       {
           f3=f1+f2;
           System.out.println("  "+f3);
           f1=f2;
           f2=f3;   
       }   
        
    }
    
}
