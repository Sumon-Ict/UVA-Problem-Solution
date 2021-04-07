/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package quaredratic;

import java.util.Scanner;

/**
 *
 * @author Sumon
 */
public class Quaredratic {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int a,b,c;
        double root1,root2,d,real;
        Scanner input=new Scanner(System.in);
        
        System.out.println("Given Quadratic equcation ax^2+bx+c\n");
        
        System.out.println("einter the value of a,b and c\n");
        
        a=input.nextInt();
        b=input.nextInt();
        c=input.nextInt();
        
        d=b*b-4*a*c;
        
        if(d==0)
        {
            System.out.println("roots are equal and real\n");
            root1=(double)(-b)/(2*a);
            
            System.out.println("root is \n"+root1);
        }
        
       else if(d>0)
        {
            System.out.println("root are real and uneqal\n");
            
            root1=(double)(-b+Math.sqrt(d))/(2*a);
            root2=(double)(-b-Math.sqrt(d))/(2*a);
            
            System.out.println("root are "+root1+root2);   
        }
       else if(d<0)
       {
           System.out.println("root are real and imaginary\n");
           
           real =(double)(-b/(2*a));
           double imaginary=(float)(Math.sqrt(Math.abs(d)))/(2*a);
           
           System.out.println("r1="+real+"+i"+imaginary);
           
           System.out.println("r2="+real+"-i"+imaginary);
           
       }      // TODO code application logic here
    }
    
}
