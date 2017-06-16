/*
aakash poudel
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab1;

/**
 *
 * @author sunway
 */
public class NewClass {
    private double a,b,c;
    private double discriminant;
    private double root1,root2;
    
public NewClass()
{}
public NewClass(double a,double b, double c)
{
this.a= a;
this.b=b;
this.c=c;
}
public void find(){
    this.discriminant =(this.b*this.b-4*this.a*this.c);
}
public void fiindRoots(){
    if (this.discriminant >=0) {
        double sqrtDis = Math.sqrt(this.discriminant);
        this.root1=(((-1*this.b) + sqrtDis ) /(2*this.a));
        this.root2 = (((-1* this.b)-sqrtDis)/(2*this.a));
        system.out.println ("the root of the number is   
        } else {
        System.out.println("the roots doesnot exist.");
        }}
        

    }



