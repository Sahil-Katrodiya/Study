interface A{
    int a=5;
    public void displayA();
}
interface A1 extends A{
    int a1=10;
    public void displayA1();
}
interface A2 extends A{
    int a2=15;
    public void displayA2();
}
interface A12 extends A1,A2{
    int a12=20;
    public void displayA12();
}
class B implements A12{
    int b=30;
    public void displayA(){
        System.out.println("A Method Called "+a);
    }
    public void displayA1(){
        System.out.println("A1 Method Called "+a1);
    }
    public void displayA2(){
        System.out.println("A2 Method Called "+a2);
    }
    public void displayA12(){
        System.out.println("A12 Method Called "+a12);
    }
    public void displayB(){
        System.out.println("B Method Called "+b);
    }
}

public class L8_A_2 {
    public static void main(String[] args) {
        B a=new B();
        a.displayA();
        a.displayA1();
        a.displayA2();
        a.displayA12();
        a.displayB();
    }
}
