/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package simple2;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.*;

/**
 *
 * @author Sumon
 */
public class Simple2 {

    JFrame f;
        JLabel  lb;
        JButton b;
        
    Simple2()
    {
        
        f=new JFrame();
        lb=new JLabel("hellow");
        b= new JButton("click");
        lb.setBounds(10,10,50,30);
        b.setBounds(120,130,50,60);
        f.add(b);
        f.add(lb);
        f.setSize(400,500);
        f.setTitle("first demo test");
        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
        f.setLocationRelativeTo(null);
        
        
    }
    public static void main(String[] args) {
        
        // TODO code application logic here
      new  Simple2();
        
    }
    
}
