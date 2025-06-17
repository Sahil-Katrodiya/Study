class NoOfClass{
    static int count;

    public NoOfClass(){
        count++;
    }

    
}
public class L6_B_6 {
public static void main(String[] args) {
        NoOfClass n1= new NoOfClass();
        NoOfClass n2= new NoOfClass();
        NoOfClass n3= new NoOfClass();
        NoOfClass n4= new NoOfClass();
        System.out.println(NoOfClass.count);
    }
}
