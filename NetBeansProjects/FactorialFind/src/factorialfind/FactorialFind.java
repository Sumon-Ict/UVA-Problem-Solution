/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package factorialfind;

import java.util.Scanner;

/**
 *
 * @author Sumon
 */
public class FactorialFind {
     static long fact(long n)
    {
        if(n<=0)
            return 1;
        return FactorialFind.fact(n-1)*n;
    }
   

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        long n;
        Scanner input=new Scanner(System.in);
        
        System.out.println("please enter the inter  number\n");
        
        n=input.nextLong();
        
        long f=FactorialFind.fact(n);
        
        System.out.println("factorial of the number is  "+f);
        
        
        // TODO code application logic here
    }
    
    
}
