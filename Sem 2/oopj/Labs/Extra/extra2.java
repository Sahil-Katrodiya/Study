import java.util.Scanner;
class Student{
    String name;
    int roll_no;
    double spi;
    String course;

    public void setter(String name,int roll_no,double spi,String course){
        this.name=name;
        this.roll_no=roll_no;
        this.spi=spi;
        this.course=course;
    }
    public void getter(){
        System.out.println("Enter Student name");

    }
}
public class extra2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Student name");
        String name=sc.next();
        System.out.println("Enter Student roll number");
        int roll_no=sc.nextInt();
        System.out.println("Enter Student spi");
        double spi=sc.nextDouble();
        System.out.println("Enter Student course");
        String course=sc.next();
        Student s1=new Student();
        s1.setter(name, roll_no, spi, course);
    }
}
