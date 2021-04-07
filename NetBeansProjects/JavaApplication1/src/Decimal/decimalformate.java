
package Decimal;

import java.text.DecimalFormat;
import java.util.Scanner;


public class decimalformate {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        double num;
        num=input.nextDouble();
        DecimalFormat ob=new DecimalFormat("0.00");
        System.out.println(" x= "+ob.format(num));
        
        
        
        
    }
    
}
