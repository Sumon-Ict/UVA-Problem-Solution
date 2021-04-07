/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package panels;

import java.awt.Color;
import java.awt.Image;
import java.awt.event.KeyEvent;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import javax.swing.ImageIcon;
import javax.swing.JFileChooser;
import javax.swing.JOptionPane;


/**
 *
 * @author HP
 */
public class Newstudent extends javax.swing.JPanel {
Connection con;
    
    String gender;
String filename = null;
byte[] person_image = null;
  
    /**
     *
     * Creates new form Newstudent
     */
    public Newstudent() {
        initComponents();
        DBconnection c=new DBconnection();
        con= c.getconnection();
        
        
    
        
    }
    
    
    public void clear(){
    firstname.setText("");
    lname.setText("");
    fullname.setText("");
    initial.setText("");
    dateofbirth.setText("");
    nic.setText("");
   
    
    contact.setText("");
    email.setText("");
     picture.setIcon(null);
     jComboBox2.setSelectedItem("None");
     jTextField1.setText("");
        
    
    
    
    
    
    
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup1 = new javax.swing.ButtonGroup();
        jPanel1 = new javax.swing.JPanel();
        jPanel2 = new javax.swing.JPanel();
        jButton3save = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jButton3 = new javax.swing.JButton();
        jButton1 = new javax.swing.JButton();
        email = new javax.swing.JTextField();
        contact = new javax.swing.JTextField();
        dateofbirth = new javax.swing.JTextField();
        jLabel30 = new javax.swing.JLabel();
        jLabel33 = new javax.swing.JLabel();
        jLabel32 = new javax.swing.JLabel();
        jTextField1 = new javax.swing.JTextField();
        jLabel6 = new javax.swing.JLabel();
        nic = new javax.swing.JTextField();
        male = new javax.swing.JRadioButton();
        female = new javax.swing.JRadioButton();
        jLabel31 = new javax.swing.JLabel();
        jLabel26 = new javax.swing.JLabel();
        jLabel1 = new javax.swing.JLabel();
        picture = new javax.swing.JLabel();
        jLabel24 = new javax.swing.JLabel();
        firstname = new javax.swing.JTextField();
        lname = new javax.swing.JTextField();
        jLabel27 = new javax.swing.JLabel();
        jComboBox2 = new javax.swing.JComboBox<>();
        initial = new javax.swing.JTextField();
        jLabel29 = new javax.swing.JLabel();
        fullname = new javax.swing.JTextField();
        jLabel28 = new javax.swing.JLabel();
        jLabel25 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jButton5 = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();

        setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBackground(new java.awt.Color(255, 255, 255));
        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel2.setBackground(new java.awt.Color(255, 255, 255));
        jPanel2.setToolTipText("");
        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jButton3save.setFont(new java.awt.Font("Tahoma", 3, 32)); // NOI18N
        jButton3save.setForeground(new java.awt.Color(0, 102, 204));
        jButton3save.setIcon(new javax.swing.ImageIcon(getClass().getResource("/project icon/Save-as-icon.png"))); // NOI18N
        jButton3save.setText("Save");
        jButton3save.setAutoscrolls(true);
        jButton3save.setOpaque(false);
        jButton3save.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton3saveActionPerformed(evt);
            }
        });
        jPanel2.add(jButton3save, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 30, 210, 90));

        jButton2.setFont(new java.awt.Font("Tahoma", 3, 32)); // NOI18N
        jButton2.setForeground(new java.awt.Color(0, 102, 204));
        jButton2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/project icon/Text-Edit-icon.png"))); // NOI18N
        jButton2.setText("Update");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });
        jPanel2.add(jButton2, new org.netbeans.lib.awtextra.AbsoluteConstraints(290, 30, -1, 90));

        jButton3.setFont(new java.awt.Font("Tahoma", 3, 32)); // NOI18N
        jButton3.setForeground(new java.awt.Color(0, 102, 204));
        jButton3.setIcon(new javax.swing.ImageIcon(getClass().getResource("/project icon/Close-2-icon.png"))); // NOI18N
        jButton3.setText("Delete");
        jButton3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton3ActionPerformed(evt);
            }
        });
        jPanel2.add(jButton3, new org.netbeans.lib.awtextra.AbsoluteConstraints(790, 30, 250, 90));

        jButton1.setFont(new java.awt.Font("Tahoma", 3, 32)); // NOI18N
        jButton1.setForeground(new java.awt.Color(0, 102, 204));
        jButton1.setIcon(new javax.swing.ImageIcon(getClass().getResource("/project icon/Clear-icon.png"))); // NOI18N
        jButton1.setText("Clear");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        jPanel2.add(jButton1, new org.netbeans.lib.awtextra.AbsoluteConstraints(530, 30, 200, 90));

        jPanel1.add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 450, 1150, 150));

        email.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                emailActionPerformed(evt);
            }
        });
        jPanel1.add(email, new org.netbeans.lib.awtextra.AbsoluteConstraints(880, 390, 240, 30));

        contact.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                contactActionPerformed(evt);
            }
        });
        contact.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                contactKeyTyped(evt);
            }
        });
        jPanel1.add(contact, new org.netbeans.lib.awtextra.AbsoluteConstraints(880, 340, 240, 30));

        dateofbirth.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                dateofbirthActionPerformed(evt);
            }
        });
        jPanel1.add(dateofbirth, new org.netbeans.lib.awtextra.AbsoluteConstraints(310, 390, 240, 30));

        jLabel30.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel30.setForeground(new java.awt.Color(0, 102, 204));
        jLabel30.setText("Date Of Birth");
        jLabel30.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel30, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 390, 280, 30));

        jLabel33.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel33.setForeground(new java.awt.Color(0, 102, 204));
        jLabel33.setText("E-Mail");
        jLabel33.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel33, new org.netbeans.lib.awtextra.AbsoluteConstraints(590, 390, 280, 30));

        jLabel32.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel32.setForeground(new java.awt.Color(0, 102, 204));
        jLabel32.setText("Contact Number");
        jLabel32.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel32, new org.netbeans.lib.awtextra.AbsoluteConstraints(590, 340, 280, 30));

        jTextField1.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyReleased(java.awt.event.KeyEvent evt) {
                jTextField1KeyReleased(evt);
            }
        });
        jPanel1.add(jTextField1, new org.netbeans.lib.awtextra.AbsoluteConstraints(590, 120, 360, 40));

        jLabel6.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        jLabel6.setText("Type NIC Find a Student or to Delete Student");
        jPanel1.add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(590, 180, 520, 30));

        nic.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                nicActionPerformed(evt);
            }
        });
        nic.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyReleased(java.awt.event.KeyEvent evt) {
                nicKeyReleased(evt);
            }
            public void keyTyped(java.awt.event.KeyEvent evt) {
                nicKeyTyped(evt);
            }
        });
        jPanel1.add(nic, new org.netbeans.lib.awtextra.AbsoluteConstraints(880, 240, 240, 30));

        buttonGroup1.add(male);
        male.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        male.setForeground(new java.awt.Color(0, 102, 204));
        male.setText("Male");
        male.setToolTipText("");
        jPanel1.add(male, new org.netbeans.lib.awtextra.AbsoluteConstraints(880, 290, 110, 30));

        buttonGroup1.add(female);
        female.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        female.setForeground(new java.awt.Color(0, 102, 204));
        female.setText("Female");
        jPanel1.add(female, new org.netbeans.lib.awtextra.AbsoluteConstraints(990, 290, 130, 30));

        jLabel31.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel31.setForeground(new java.awt.Color(0, 102, 204));
        jLabel31.setText("Gender");
        jLabel31.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel31, new org.netbeans.lib.awtextra.AbsoluteConstraints(590, 290, 280, 30));

        jLabel26.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel26.setForeground(new java.awt.Color(0, 102, 204));
        jLabel26.setText("N.I.C. Number");
        jLabel26.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel26, new org.netbeans.lib.awtextra.AbsoluteConstraints(590, 240, 280, 30));

        jLabel1.setBackground(new java.awt.Color(255, 255, 255));
        jLabel1.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jLabel1.setOpaque(true);
        jPanel1.add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(570, 100, 580, 350));

        picture.setOpaque(true);
        jPanel1.add(picture, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 110, 120, 130));

        jLabel24.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel24.setForeground(new java.awt.Color(0, 102, 204));
        jLabel24.setText("First Name");
        jLabel24.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel24, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 180, 140, 30));

        firstname.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                firstnameActionPerformed(evt);
            }
        });
        jPanel1.add(firstname, new org.netbeans.lib.awtextra.AbsoluteConstraints(310, 180, 240, 30));

        lname.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                lnameActionPerformed(evt);
            }
        });
        jPanel1.add(lname, new org.netbeans.lib.awtextra.AbsoluteConstraints(310, 230, 240, 30));

        jLabel27.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel27.setForeground(new java.awt.Color(0, 102, 204));
        jLabel27.setText("Last Name");
        jLabel27.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel27, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 230, 140, 30));

        jComboBox2.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "None", "Mr.", "Mrs.", "Miss" }));
        jPanel1.add(jComboBox2, new org.netbeans.lib.awtextra.AbsoluteConstraints(310, 130, 240, 30));

        initial.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                initialActionPerformed(evt);
            }
        });
        jPanel1.add(initial, new org.netbeans.lib.awtextra.AbsoluteConstraints(310, 330, 240, 30));

        jLabel29.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel29.setForeground(new java.awt.Color(0, 102, 204));
        jLabel29.setText("Name with Initials");
        jLabel29.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel29, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 330, 290, 30));

        fullname.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                fullnameActionPerformed(evt);
            }
        });
        jPanel1.add(fullname, new org.netbeans.lib.awtextra.AbsoluteConstraints(310, 280, 240, 30));

        jLabel28.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel28.setForeground(new java.awt.Color(0, 102, 204));
        jLabel28.setText("Full Name");
        jLabel28.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel28, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 280, 290, 30));

        jLabel25.setBackground(new java.awt.Color(255, 255, 255));
        jLabel25.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        jLabel25.setForeground(new java.awt.Color(0, 102, 204));
        jLabel25.setText("Title");
        jLabel25.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jPanel1.add(jLabel25, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 130, 140, 30));

        jLabel5.setFont(new java.awt.Font("Tahoma", 3, 44)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(0, 102, 204));
        jLabel5.setText("STUDENT REGISTRATION");
        jPanel1.add(jLabel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 20, 590, 90));

        jButton5.setText("Browse");
        jButton5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton5ActionPerformed(evt);
            }
        });
        jPanel1.add(jButton5, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 250, -1, -1));

        jLabel2.setBackground(new java.awt.Color(255, 255, 255));
        jLabel2.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jLabel2.setOpaque(true);
        jPanel1.add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 100, 570, 350));

        jLabel3.setBackground(new java.awt.Color(255, 255, 255));
        jLabel3.setForeground(new java.awt.Color(0, 153, 204));
        jLabel3.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        jLabel3.setOpaque(true);
        jPanel1.add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 1150, 100));

        add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 1160, 600));
    }// </editor-fold>//GEN-END:initComponents

    private void jButton3saveActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton3saveActionPerformed


        try {
            
           
            if (firstname.getText().isEmpty() | lname.getText().isEmpty()| fullname.getText().isEmpty()|initial.getText().isEmpty()|dateofbirth.getText().isEmpty()|nic.getText().isEmpty()|contact.getText().isEmpty()|email.getText().isEmpty()|jComboBox2.getSelectedItem().equals("None")) {
               
                 getToolkit().beep();
                JOptionPane.showMessageDialog(null,"One of the required field is empty!","ERROR",JOptionPane.ERROR_MESSAGE,null);
                
            }else if (!nic.getText().trim().matches("^[0-9]{9}[vVxX]$")) {
                getToolkit().beep();
                JOptionPane.showMessageDialog(null,"Invalid Nic!","ERROR",JOptionPane.ERROR_MESSAGE,null);
            }
            else if (person_image!=null) {
           
            String query = "INSERT INTO student (title,fname,lname,fullname,initial,dob,nic,gender,contact,email,image) values(?,?,?,?,?,?,?,?,?,?,?)";
            PreparedStatement pst = con.prepareStatement(query);
            
             pst.setString(1, jComboBox2.getSelectedItem().toString());
            pst.setString(2, firstname.getText());
            pst.setString(3, lname.getText());
            pst.setString(4, fullname.getText());
            pst.setString(5, initial.getText());
            pst.setString(6, dateofbirth.getText());
            pst.setString(7, nic.getText());
            if (male.isSelected()) {
                gender = "Male";
            }
            if (female.isSelected()) {
                gender = "Female";
            }
            pst.setString(8, gender);
            pst.setString(9, contact.getText());
            pst.setString(10, email.getText());
            pst.setBytes(11, person_image);
            pst.executeUpdate();
            
            JOptionPane.showMessageDialog(null, "Saved Successfully");

            }

            else{
            getToolkit().beep();
                JOptionPane.showMessageDialog(null,"You cannot save data without a student image","ERROR",JOptionPane.ERROR_MESSAGE,null);
                
            }
           


        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, e);
        }
    }//GEN-LAST:event_jButton3saveActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        if (firstname.getText().isEmpty() | lname.getText().isEmpty()| fullname.getText().isEmpty()|initial.getText().isEmpty()|dateofbirth.getText().isEmpty()|nic.getText().isEmpty()|contact.getText().isEmpty()|email.getText().isEmpty()|jComboBox2.getSelectedItem().equals("None")) {
             getToolkit().beep();
                JOptionPane.showMessageDialog(null,"Please Specify What Data You Want To Update","ERROR",JOptionPane.ERROR_MESSAGE,null);
        }
        else{
       
        try {
           
            

            String value=nic.getText();
            String query="";
           
             
              if (person_image!=null) {
                query = "UPDATE student SET title=?,fname=?,lname=?,fullname=?,initial=?,dob=?,gender=?,contact=?,email=?,image=? WHERE nic='"+value+"'";
            }else{
              
              query = "UPDATE student SET title=?,fname=?,lname=?,fullname=?,initial=?,dob=?,gender=?,contact=?,email=? WHERE nic='"+value+"'";
              
              
              }
      
                    

            PreparedStatement pst = con.prepareStatement(query);

           pst.setString(1, jComboBox2.getSelectedItem().toString());
           pst.setString(2, firstname.getText());
            pst.setString(3, lname.getText());
            pst.setString(4, fullname.getText());
            pst.setString(5, initial.getText());

            pst.setString(6, dateofbirth.getText());
            if (male.isSelected()) {
                gender="Male";
            }if (female.isSelected()) {
                gender="Female";
            }
            pst.setString(7, gender);
            
//            pst.setString(8, mobilenumber.getText());
     //       pst.setString(9, homenumber.getText());
     pst.setString(8, contact.getText());
            pst.setString(9, email.getText());
            if (person_image!=null) {
                pst.setBytes(10, person_image);
                
            }
            

            pst.executeUpdate();
            JOptionPane.showMessageDialog(null, "Updated Successfully");
            
            
            
     
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, e);
        }
        }
    }//GEN-LAST:event_jButton2ActionPerformed

    private void jButton3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton3ActionPerformed
        try {
            
            
            if (jTextField1.getText().isEmpty()) {
                getToolkit().beep();
                JOptionPane.showMessageDialog(null,"Please Enter the Nic in the Search Field to delete data","ERROR",JOptionPane.ERROR_MESSAGE,null);
                
            }
            else{
            
            
            getToolkit().beep();
             int p= JOptionPane.showConfirmDialog(null, "Do You Want To Delete The Student "+fullname.getText()+" From The database","Delete",JOptionPane.YES_NO_OPTION);
        if (p==0) {
            
            String query = "DELETE FROM student WHERE nic=?";
            PreparedStatement pst = con.prepareStatement(query);
            String query2 = "DELETE FROM courseposter WHERE nic=?";
            PreparedStatement pst2 = con.prepareStatement(query2);
            String query3 = "DELETE FROM courseunder WHERE nic=?";
            PreparedStatement pst3 = con.prepareStatement(query3);
            pst.setString(1, jTextField1.getText());
            pst.execute();
            pst2.setString(1, jTextField1.getText());
            pst2.execute();
             pst3.setString(1, jTextField1.getText());
            pst3.execute();
            
            JOptionPane.showMessageDialog(null, "data successfully deleted");
        }
            
            
            
            
            
            }
            
        
             
            
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, e);
            
        }
    }//GEN-LAST:event_jButton3ActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        clear();
    }//GEN-LAST:event_jButton1ActionPerformed

    private void firstnameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_firstnameActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_firstnameActionPerformed

    private void jTextField1KeyReleased(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_jTextField1KeyReleased
        try {
        

            String query="SELECT * FROM student WHERE nic=?";
            PreparedStatement pst= con.prepareStatement(query);
            pst.setString(1, jTextField1.getText());
            //pst.setString(2, jTextField1.getText());
            ResultSet rs=pst.executeQuery();
            if (rs.next()) {
                
                 String add1=rs.getString("title");
                jComboBox2.setSelectedItem(add1);
                String add2=rs.getString("fname");
                firstname.setText(add2);
                String add3=rs.getString("lname");
                lname.setText(add3);
                String add4=rs.getString("fullname");
                fullname.setText(add4);
                String add5=rs.getString("initial");
                initial.setText(add5);
                 String add6=rs.getString("dob");
                dateofbirth.setText(add6);
                String add7=rs.getString("nic");
                nic.setText(add7);
                
                String gender = rs.getString("gender");

                if (gender.equals("Male"))
                {
                    male.setSelected(true);

                }
                else if(gender.equals("Female"))
                {
                    female.setSelected(true);
                }

                
                String add9=rs.getString("contact");
                contact.setText(add9);
               
                String add10=rs.getString("email");
                email.setText(add10);

              
                byte[] img = rs.getBytes("image");

                //Resize The ImageIcon
                ImageIcon image = new ImageIcon(img);
                Image im = image.getImage();
                Image myImg = im.getScaledInstance(picture.getWidth(), picture.getHeight(),Image.SCALE_SMOOTH);
                ImageIcon newImage = new ImageIcon(myImg);
                picture.setIcon(newImage);
               
            }

         
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, e);
        }
    }//GEN-LAST:event_jTextField1KeyReleased

    private void emailActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_emailActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_emailActionPerformed

    private void contactActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_contactActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_contactActionPerformed

    private void nicActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_nicActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_nicActionPerformed

    private void dateofbirthActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_dateofbirthActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_dateofbirthActionPerformed

    private void initialActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_initialActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_initialActionPerformed

    private void fullnameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fullnameActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_fullnameActionPerformed

    private void lnameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_lnameActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_lnameActionPerformed

    private void jButton5ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton5ActionPerformed
          JFileChooser chooser = new JFileChooser();
        
        
        
        chooser.showOpenDialog(null);
        File f = chooser.getSelectedFile();
        
         filename = f.getAbsolutePath();
        ImageIcon imageicon = new ImageIcon(new ImageIcon(filename).getImage().getScaledInstance(picture.getWidth(), picture.getHeight(), Image.SCALE_SMOOTH));
        picture.setIcon(imageicon);
        try {
            File image = new File(filename);
            FileInputStream fis = new FileInputStream(f);
            ByteArrayOutputStream bos = new ByteArrayOutputStream();
            byte[] buf = new byte[1024];
            for (int readnum; (readnum = fis.read(buf)) != -1;) {
                bos.write(buf, 0, readnum);

            }
            person_image = bos.toByteArray();
        } catch (Exception e) {
        }
       

    }//GEN-LAST:event_jButton5ActionPerformed

    private void nicKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_nicKeyTyped
      
        String s=nic.getText();
            
            if (!(s.length()<10 ))
            {
                
                    evt.consume();
                      getToolkit().beep();
            
            }
    }//GEN-LAST:event_nicKeyTyped

    private void contactKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_contactKeyTyped
        char c=evt.getKeyChar();
        if (! (Character.isDigit(c))||c==KeyEvent.VK_BACK_SPACE||c==KeyEvent.VK_DELETE) {
            
            evt.consume();
            getToolkit().beep();
        }
        String s=contact.getText();
            
            if (!(s.length()<10 ))
            {
            getToolkit().beep();
            evt.consume();
            }
            
    }//GEN-LAST:event_contactKeyTyped

    private void nicKeyReleased(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_nicKeyReleased
//      if(!(nic.getText().trim().matches("^[0-9]{9}[vVxX]$")))
//{
//    
//}
//      else{
//      nic.setBackground(Color.red);
//      
//      
//      
//      }  
//     
       
    }//GEN-LAST:event_nicKeyReleased


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.JTextField contact;
    private javax.swing.JTextField dateofbirth;
    private javax.swing.JTextField email;
    private javax.swing.JRadioButton female;
    private javax.swing.JTextField firstname;
    private javax.swing.JTextField fullname;
    private javax.swing.JTextField initial;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JButton jButton3;
    private javax.swing.JButton jButton3save;
    private javax.swing.JButton jButton5;
    private javax.swing.JComboBox<String> jComboBox2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel24;
    private javax.swing.JLabel jLabel25;
    private javax.swing.JLabel jLabel26;
    private javax.swing.JLabel jLabel27;
    private javax.swing.JLabel jLabel28;
    private javax.swing.JLabel jLabel29;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel30;
    private javax.swing.JLabel jLabel31;
    private javax.swing.JLabel jLabel32;
    private javax.swing.JLabel jLabel33;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JTextField lname;
    private javax.swing.JRadioButton male;
    private javax.swing.JTextField nic;
    private javax.swing.JLabel picture;
    // End of variables declaration//GEN-END:variables



}
