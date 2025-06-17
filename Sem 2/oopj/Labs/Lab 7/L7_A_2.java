import java.util.Scanner;

class Book{
    private String author_name;

    public Book(String author_name) {
        this.author_name = author_name;
    }

    public void display(){
        System.out.println("Author Name: "+author_name);
    }
}
class  Book_publication extends Book{
    private String title;

    public Book_publication(String author_name,String title) {
        super(author_name);
        this.title=title;
    }

    public void display(){
        super.display();
        System.out.println("Title: "+title);
    }
}
class Paper_publication extends Book{
    private String title;

    public Paper_publication(String author_name,String title) {
        super(author_name);
        this.title=title;
    }

    public void display(){
        super.display();
        System.out.println("Title: "+title);
    }
}
public class L7_A_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Book book=null;

        System.out.println("Enter 1 for Book Publication and enter 2 for Paper Publication");
        int a=sc.nextInt();
        
        if(a==1){
            System.out.println("Enter the author name:");
            String author_name=sc.next();
            System.out.println("Enter the Book title:");
            String title=sc.next();
            book=new Book_publication(author_name,title);
        }
        else if(a==2){
            System.out.println("Enter the author name:");
            String author_name=sc.next();
            System.out.println("Enter the Paper title:");
            String title=sc.next();
            book=new Paper_publication(author_name,title);
        }
        book.display();
    }
}
