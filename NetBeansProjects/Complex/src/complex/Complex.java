/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package complex;
class complex{
    int real,imaginary;
    complex()
    {
        real=imaginary=0;
    }
    complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    complex addcomplex(complex c1,complex c2)
    {
        complex c3=new complex();
        c3.real=c1.real+c2.real;
        c3.imaginary=c1.imaginary+c2.imaginary;
        return c3;
                
    }
    void display()
    {
        System.out.println(real+"+i"+imaginary);
    }
}

/**
 *
 * @author Sumon
 */
public class Complex {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        complex obj1=new complex(3,4);
        complex obj2=new complex(4,6);
        complex obj3=new complex();
        obj3=obj3.addcomplex(obj1, obj2);
        
        System.out.println("first complex number\n");
        obj1.display();
        System.out.println("second complex number\n");
        obj2.display();
        System.out.println("sum of these complex number \n");    
        // TODO code application logic here
    }
    
}
