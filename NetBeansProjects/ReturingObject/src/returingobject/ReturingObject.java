
package returingobject;


public class ReturingObject {

   
    public static void main(String[] args) {
        
        Complex c1=new Complex(2,4);
        Complex c2=new Complex(23,45);
        
        System.out.println(" complex number c1= "+c1.real +"+i"+c1.imaginary );
        System.out.println("Complex number c2  ="+c2.real + "+i"+c2.imaginary);
        
        c2=c2.addcom(c1,c2);
        System.out.println("add of two complex number  ="+c2.real + "+i"+c2.imaginary);
        
        
    }
    
}
