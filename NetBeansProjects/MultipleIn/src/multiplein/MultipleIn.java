/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package multiplein;
class Data1{
    int data1,data2;
    Data1(int d1,int d2)
    {
        data1=d1;
        data2=d2;
    }
}

    
class Data2 extends Data1{
    int data3,data4;
    Data2(int d1,int d2,int d3,int d4)
    {
        super(d1,d2);
        data3=d3;
        data4=d4;
    }
}
class Data3 extends Data2{
    int data5;
        int  data6;
    Data3(int d1,int d2,int d3,int d4,int d5,int d6)
    {
        super(d1,d2,d3,d4);
        data5=d5;
        data6=d6;
    }
    void printvlaues()
    {
        System.out.println("data1 = "+data1);
         System.out.println("data2 = "+data2);
          System.out.println("data3 = "+data3);
           System.out.println("data4 = "+data4);
            System.out.println("data5 = "+data5);
             System.out.println("data6 = "+data6);
             
    }
}


/*
*
 *
 * @author Sumon
 */
public class MultipleIn {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        
        Data3 obj=new Data3(34,56,12,34,56,78);
        obj.printvlaues();
        // TODO code application logic here
    }
    
}
