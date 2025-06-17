import java.util.Scanner;

class Member{
    String name;
    int age;
    int phone_number;
    String address;
    int salary;

    public Member(String name, int age, int phone_number, String address, int salary) {
        this.name = name;
        this.age=age;
        this.phone_number=phone_number;
        this.address=address;
        this.salary=salary;
    }

    public void printSalary(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Phone Number: " + phone_number);
        System.out.println("Salary: " + salary);
    }
}
class Employee extends Member{
    String specialization;
    String department;

    public Employee(String name, int age, int phone_number, String address, int salary,String specialization, String department) {
        super(name, age, phone_number, address, salary);
        this.specialization=specialization;
        this.department=department;
    }

    public void display(){
        super.printSalary();
        System.out.println("Specialization: " + specialization);
        System.out.println("Department: " + department);
    }
}
class Manager extends Member{
    String specialization;
    String department;

    public Manager(String name, int age, int phone_number, String address, int salary,String specialization, String department) {
        super(name, age, phone_number, address, salary);
        this.specialization=specialization;
        this.department=department;
    }

    public void display(){
        super.printSalary();
        System.out.println("Specialization: " + specialization);
        System.out.println("Department: " + department);
    }
}
public class L7_B_3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter Employee name: ");
        String ename=sc.next();
        System.out.println("Enter Employee age: ");
        int eage=sc.nextInt();
        System.out.println("Enter Employee phone number: ");
        int ephone_number=sc.nextInt();
        System.out.println("Enter Employee address: ");
        String eaddress=sc.next();
        System.out.println("Enter Employee salary: ");
        int esalary=sc.nextInt();
        System.out.println("Enter Employee specialization: ");
        String especialization=sc.next();
        System.out.println("Enter Employee department: ");
        String edepartment=sc.next();

        Employee e=new Employee(ename,eage,ephone_number,eaddress,esalary,especialization,edepartment);

        System.out.println("Enter Manager name: ");
        String mname=sc.next();
        System.out.println("Enter Manager age: ");
        int mage=sc.nextInt();
        System.out.println("Enter Manager phone number: ");
        int mphone_number=sc.nextInt();
        System.out.println("Enter Manager address: ");
        String maddress=sc.next();
        System.out.println("Enter Manager salary: ");
        int msalary=sc.nextInt();
        System.out.println("Enter Manager specialization: ");
        String mspecialization=sc.next();
        System.out.println("Enter Manager department: ");
        String mdepartment=sc.next();

        Manager m=new Manager(mname, mage, mphone_number, maddress, msalary, mspecialization, mdepartment);

        e.display();
        System.out.println();
        m.display();
    }
}
