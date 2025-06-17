class Odd extends Thread{
    synchronized public void run(){
        // System.out.println("Odd no:-");
        for(int i=1;i<=20;i++){
            if(i%2!=0){
                System.out.println(i);
            }
        }
    }
}
class Even extends Thread{
    synchronized public void run(){
        // System.out.println("Even no:-");
        for(int i=1;i<=20;i++){
            if(i%2==0){
                System.out.println(i);
            }
        }
    }
}

public class L11_B_4 {
    public static void main(String[] args) {
        Odd o=new Odd();
        Even e=new Even();

        o.start();
        try {
            o.join();
        }catch (Exception e1){
            e1.printStackTrace();
        }
        e.start();
    }
}
