/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fact;

import java.util.Scanner;

/**
 *
 * @author Sumon
 */
public class Fact {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        long a;
        long result=1;
        
        System.out.println("enter the number for finding factorial\n");
        
        a=input.nextLong();
        
        for(long i=1;i<=a;i++)
        {
            result=result*i;
        }
        
        System.out.println("the factorial of the numbber is "+result);
        
        
        
        
        
        // TODO code application logic here
    }
    
}
