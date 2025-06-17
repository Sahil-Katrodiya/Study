import java.util.Scanner;
class Sentence{
    int vowelA=0,vowelE=0,vowelI=0,vowelO=0,vowelU=0;


    public void checkMethod(){
        Scanner sc=new Scanner(System.in);
        while(true){
            System.out.println("Enter quit for Quit or Enter Sentence");
            String sentence=sc.next(); 
            if(sentence.equals("quit")){
                break;
            }
            for(int i=0;i<sentence.length();i++){
                char c=sentence.charAt(i);
                if(c==('a')||c==('A')){
                    vowelA++;
                }
                if (c==('e')||c==('E')){
                    vowelE++;
                }
                if (c==('i')||c==('I')){
                    vowelI++;
                }
                if (c==('o')||c==('O')){
                    vowelO++;
                }
                if (c==('u')||c==('U')){
                    vowelU++;
                }
            }
        }
        System.out.println(vowelA);
        System.out.println(vowelE);
        System.out.println(vowelI);
        System.out.println(vowelO);
        System.out.println(vowelU);
    }
}

public class L6_B_4 {
    public static void main(String[] args){
        Sentence str =new Sentence();
        str.checkMethod();
    }
}
