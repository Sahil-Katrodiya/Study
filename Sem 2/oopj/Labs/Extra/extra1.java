import java.util.Scanner;
class Student{
    String name;
    String enrollmentNo;

    public Student(String name,String enrollmentNO){
        this.name=name;
        this.enrollmentNo=enrollmentNO;
    }

    public void display(){
        System.out.println("Name is ="+name);
        System.out.println("Enrollment Number is ="+enrollmentNo);
    }
}
public class extra1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Number of Student");
        int a=sc.nextInt();

        Student[] s=new Student[a];

        for(int i=0;i<s.length;i++){
            System.out.println("Enter Name of Student");
            String name=sc.next();
            System.out.println("Enter Enrollment Number");
            String enrollmentNo=sc.next();
            
            s[i]=new Student(name, enrollmentNo);
        }

        for(int i=0;i<s.length;i++){
            System.out.println();
            System.out.println("Student "+(i+1)+" details");
            s[i].display();
        }
    }
}