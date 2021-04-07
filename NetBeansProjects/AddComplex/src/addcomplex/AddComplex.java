package addcomplex;
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
public class AddComplex {
   /* int real,imaginary;
    AddComplex()
    {
        real=imaginary=0;
    }
    AddComplex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    
    AddComplex adcomplex(AddComplex c1,AddComplex c2)
    {
        AddComplex c3=new AddComplex();
        c3.real=c1.real+c2.real;
        c3.imaginary=c1.imaginary+c2.imaginary;
        return c3;
    }
    void display()
    {
        System.out.println(real+"+i"+imaginary);
        
    }
*/
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        complex obj=new complex(3,5);
        complex obj2=new complex(4,5);
        complex obj3=new complex();
        obj3=obj3.addcomplex(obj, obj2);
        
        
        System.out.println("first complex number\n");
        obj.display();
        System.out.println("second complex number\n");
        obj2.display();
        System.out.println("sum of these complex number \n");
        obj3.display();
    }  
}

