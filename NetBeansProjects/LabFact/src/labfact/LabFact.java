/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labfact;

import java.util.Scanner;

/**
 *
 * @author Sumon
 */
public class LabFact {
   static  long fact(Long n)
    {
        if(n<=0)
            return 1;
        return LabFact.fact(n-1)*n;
        
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        long n,result;
        Scanner input=new Scanner(System.in);
        
        System.out.println("enter the number for finding factorial\n");
        
        n=input.nextLong();
        
        result=LabFact.fact(n);
        
        System.out.println("factorial "+result);
        // TODO code application logic here
    }
    
   
}
