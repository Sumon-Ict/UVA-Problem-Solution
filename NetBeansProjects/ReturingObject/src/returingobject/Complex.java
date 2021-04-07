
package returingobject;


public class Complex {
    int real,imaginary;
  Complex(int r,int i)
  {
      real=r;
      imaginary=i;
      
  }
  public static Complex addcom(Complex a,Complex b)
  {
      return new Complex(a.real+b.real,a.imaginary+b.imaginary);
      
  }
    
}
