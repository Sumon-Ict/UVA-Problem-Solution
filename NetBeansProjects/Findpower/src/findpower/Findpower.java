/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package findpower;

import java.util.Scanner;

/**
 *
 * @author Sumon
 */
public class Findpower {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int n,p;
        long  r=1;
        System.out.println("enter the base number and power \n");
        
        Scanner input=new Scanner(System.in);
        
        n=input.nextInt();
        p=input.nextInt();  
        
        if(n>=1&&p==0)
        {
            r=1;
        }
        else if(n==0&&p>=1)
        {
            r=0;
        }
        
        else
        {
            for(int i=1;i<=p;i++)
           
                r=r*n;
        }
        
        System.out.println("the result is \n"+r);
        
        // TODO code application logic here
    }
    
}
