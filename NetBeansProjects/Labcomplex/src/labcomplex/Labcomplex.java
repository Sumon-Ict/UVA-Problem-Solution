/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labcomplex;
class complex
{
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
public class Labcomplex {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        complex ob1= new complex(4,56);
        complex ob2=new complex(12,45);
        complex ob3=new complex();
        ob3=ob3.addcomplex(ob1, ob2);
        
     //   System.out.println();
     ob1.display();
     ob2.display();
     ob3.display();
    }
    
}
