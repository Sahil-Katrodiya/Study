import java.util.Scanner;
class Student{
    int idNo;
    int noOfSubject;
    String[] subjectCode;
    int[] subjectCredit;
    String[] gradeObtained;
    double spi;


    public Student(int idNo,int noOfSubject,String[] subjectCode,int[] subjectCredit,String[] gradeObtained){
        this.idNo=idNo;
        this.noOfSubject=noOfSubject;
        this.subjectCode=subjectCode;
        this.subjectCredit=subjectCredit;
        this.gradeObtained=gradeObtained;
    }

    public void calculate_Spi(){
        int credit=0;
        int grade_point=0;
        int[] points=new int[noOfSubject];
        int totalPoint=0;
        for(int i=0;i<noOfSubject;i++){
            credit+=subjectCredit[i];
            switch (gradeObtained[i]) {
                case "A+":
                    grade_point=10;
                    break;
                case "A":
                    grade_point=9;
                    break;
                case "B+":
                    grade_point=8;
                    break;
                case "B":
                    grade_point=7;
                    break;
                case "C+":
                    grade_point=6;
                    break;
                case "C":
                    grade_point=5;
                    break;
                case "D+":
                    grade_point=4;
                    break;
                case "D":
                    grade_point=3;
                    break;
                case "E+":
                    grade_point=2;
                    break;
                case "E":
                    grade_point=1;
                    break;
                case "F":
                    grade_point=0;
                    break;
            }
            points[i]=grade_point*subjectCredit[i];
            totalPoint+=points[i];
        }
        this.spi=((double)totalPoint/credit);
        System.out.println("SPI is ="+spi);
    }
}
public class L7_A_1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Number of Student");
        int a=sc.nextInt();

        Student[] s=new Student[a];

        for(int i=0;i<s.length;i++){
            System.out.println("Enter Student ID");
            int idNo=sc.nextInt();
            System.out.println("Enter Number of Subject");
            int noOfSubject=sc.nextInt();            
            String[] subjectCode=new String[noOfSubject];
            int[] subjectCredit=new int[noOfSubject];
            String[] gradeObtained=new String[noOfSubject];
            
            for(int j=0;j<noOfSubject;j++){
                System.out.println("Enter Subject Code");
                subjectCode[j]=sc.next();
                System.out.println("Enter Subject Credit");
                subjectCredit[j]=sc.nextInt();
                System.out.println("Enter Subject Grade");
                gradeObtained[j]=sc.next();
            }
            s[i]=new Student(idNo,noOfSubject,subjectCode,subjectCredit,gradeObtained);
            s[i].calculate_Spi();
        }
    }

}