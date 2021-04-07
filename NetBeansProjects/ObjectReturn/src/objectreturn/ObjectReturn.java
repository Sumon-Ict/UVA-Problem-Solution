/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package objectreturn;
    
    

/**
 *
 * @author Sumon
 */
public class ObjectReturn {
    int real,imaginary;
    ObjectReturn(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    public static ObjectReturn addcom(ObjectReturn c1,ObjectReturn c2)
    {
        
        return new ObjectReturn(c1.real+c2.real,c1.imaginary+c2.imaginary);
    
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        ObjectReturn ob1=new ObjectReturn(12,34);
        ObjectReturn ob2=new ObjectReturn(12,34);
        ob2=ob2.addcom(ob1,ob2);
        
        System.out.println(ob2.real+"+i"+ob2.imaginary);
        // TODO code application logic here
    }
    
}
