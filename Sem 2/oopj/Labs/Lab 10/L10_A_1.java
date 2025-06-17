import java.util.Scanner;
public class L10_A_1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of Student");
        int n=sc.nextInt();
        int marks[]=new int[5];
        int totalmarks=0;
        
        // Exception Handling

        try{
            for(int i=0;i<n;i++){
                totalmarks=totalmarks+marks[i];
            }
            int percentage=(totalmarks/n)*100;
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Index of Array Out of Bound");
        }catch(ArithmeticException e){
            System.out.println("Arithmatic Exception");
        }
        System.out.println("Byeeee");
    }
}