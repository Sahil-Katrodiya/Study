import java.util.Scanner;

class Complex{
    int realNumber;
    int imaginaryNumber;

    public Complex(){
        this.realNumber=0;
        this.imaginaryNumber=0;
    }

    public Complex(int realNumber,int imaginaryNumber){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter The Real Part of Complex Number = ");
        realNumber=sc.nextInt();
        System.out.println("Enter The Imaginary Part of Complex Number = ");
        imaginaryNumber=sc.nextInt();
        
        this.realNumber=realNumber;
        this.imaginaryNumber=imaginaryNumber;
    }
    public void addition(Complex add){
        this.realNumber+=add.realNumber;
        this.imaginaryNumber+=add.imaginaryNumber;
    }
    public void print(){
        System.out.println(this.imaginaryNumber+"i+"+this.realNumber);
    }
}
public class L6_B_5 {
    public static void main(String[] args){
        Complex c1=new Complex(0,0);
        Complex c2=new Complex(0,0);

        c1.addition(c2);
        c1.print();
    }
    
}
