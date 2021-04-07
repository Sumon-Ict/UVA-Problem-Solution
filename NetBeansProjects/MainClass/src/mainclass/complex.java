/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainclass;
public class complex{
    
    
    int real,img;
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    public static complex addcom(complex c1,complex c2)
    {
        return new complex(c1.real+c2.real,c1.img+c2.img);
        
    }
}
/**
 *
 * @author Sumon
 */


    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        complex  a=new complex(12,34);
        complex b=new complex(45,67);
        
        
        System.out.println("fist complex number is "+a.real+"+i"+a.img);
        System.out.println("fist complex number is "+b.real+"+i"+b.img);
        
        b=b.addcom(a,b);
        System.out.println("fist complex number is "+b.real+"+i"+b.img);
        
        
        
        
        // TODO code application logic here
    }
    

