import java.util.Scanner;
public class L4_A_1
{
	public static void main(String[] args)
	{
		Scanner	sc=new Scanner(System.in);
		System.out.println("Enter line");
		String line=sc.nextLine();
		int consonant=0,vowel=0,s=0,n=0,specialchar=0;
		for(int i=0;i<line.length();i++)
		{
			char c=line.charAt(i);
			if(c==('a')||c==('e')||c==('i')||c==('o')||c==('u')||c==('A')||c==('E')||c==('I')||c==('O')||c==('U')){
				vowel++;
			}
			else if((c>='0')&&(c<='9')){
				n++;
			}
			else if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
			{
				consonant++;
			}
			else{
				specialchar++;
			}
		}
		System.out.println("Number of Consonant are = "+consonant);
		System.out.println("Number of Vowel are = "+vowel);
		System.out.println("Number of Number are = "+n);
		System.out.println("Number of Special Character are = "+specialchar);
	}
}