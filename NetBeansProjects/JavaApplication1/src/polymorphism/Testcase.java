
package polymorphism;


public class Testcase {
    public static void main(String[] args)
    {
        
        Person p=new Person();
        p.disply();
         p=new Teacher();
        p.disply();
         p= new Student();
        p.disply();
        
    }
    
}
