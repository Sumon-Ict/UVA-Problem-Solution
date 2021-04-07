/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package returnob;
    

/**
 *
 * @author Sumon
 */
public class ReturnOb {
    int real,img;
    ReturnOb(int r,int i)
    {
        real=r;
        img=i;
    }
public static ReturnOb addcom(ReturnOb c1,ReturnOb c2)
{
    return new ReturnOb(c1.real+c2.real,c1.img+c2.img);
            
}


    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        ReturnOb  a=new ReturnOb(12,34);
        ReturnOb b=new ReturnOb(23,56);
        System.out.println("first complex number "+a.real+"+i"+a.img);
        System.out.println("first complex number "+b.real+"+i"+b.img);
        
        b=b.addcom(a,b);
        
        
        
        System.out.println("first complex number "+b.real+"+i"+b.img);
        
        
    }
        // TODO code application logic here
    }
    

