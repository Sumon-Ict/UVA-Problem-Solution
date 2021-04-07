/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package multipleinheritance;

/**
 *
 * @author Sumon
 */
public class DataV1 {
    int data1;
    int data2;
    DataV1(int d1,int d2)
    {
        data1=d1;
        data2=d2;
    }
    
    
}
class DataV2 extends DataV1{
    int data3;
    int data4;
    DataV2(int d1,int d2,int d3,int d4)
    {
        super(d1,d2);
        data3=d3;
        data4=d4;
        
    }
}
class DataV3 extends DataV2{
    int data5;
    int data6;
    DataV3(int d1,int d2,int d3,int d4,int d5,int d6)
    {
        super(d1,d2,d3,d4);
        data5=d5;
        data6=d6;
    }

    void printValues()
{
System.out.println("data1 = "+data1);
System.out.println("data2 = "+data2);

System.out.println("data2 = "+data2);
System.out.println("data1 = "+data3);
System.out.println("data1 = "+data4);
System.out.println("data1 = "+data5);
System.out.println("data1 = "+data5);


}
    }


