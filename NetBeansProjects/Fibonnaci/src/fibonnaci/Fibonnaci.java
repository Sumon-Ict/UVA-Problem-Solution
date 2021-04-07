/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fibonnaci;

import java.util.Scanner;

/**
 *
 * @author Sumon
 */
public class Fibonnaci {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        Scanner input=new Scanner(System.in);
        int n;
        
        System.out.println("enter the number of terms\n");
        
         n=input.nextInt();
        
        int fib[]=new int[n];
        
        fib[0]=1;
        fib[1]=1;
        
        for(int i=2;i<n;i++)
            fib[i]=fib[i-1]+fib[i-2];
     
   System.out.println("the fibonacci series of the n terms\n");
   
   for(int i=0;i<n;i++)
       System.out.println("   "+fib[i]);
        }
        
        // TODO code application logic here
        
    }
