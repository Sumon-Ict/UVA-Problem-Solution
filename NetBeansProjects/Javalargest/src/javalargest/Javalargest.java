
package javalargest;

import java.util.Scanner;

public class Javalargest {

    
    public static void main(String[] args) {
        
        int a,b,c;
        int largest=0;
        Scanner input=new Scanner(System.in);
        
        System.out.println("enter the three integer number\n");
        
        a=input.nextInt();
        b=input.nextInt();
        c=input.nextInt();
        
        if(a>b&&a>c)
            System.out.println("the largest number is "+a);
        else if(b>a&&b>c)
            System.out.println("the largest number is "+b);
        else 
            System.out.println("the largest number is "+c);
       
    }
    
}
