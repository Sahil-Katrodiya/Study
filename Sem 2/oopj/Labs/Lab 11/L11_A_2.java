class GM implements Runnable {
    public void run(){
        for(int i=0;i<4;i++){
            try{
                System.out.println("Good Morning");
                Thread.sleep(1000);
            }catch(Exception e){
                e.printStackTrace();
            }
        }
    }
}
class GA implements Runnable {
    public void run(){
        for(int i=0;i<4;i++){
            try{
                System.out.println("Good Afternoon");
                Thread.sleep(3000);
            }catch(Exception e){
                e.printStackTrace();
            }
        }
    }
}
public class L11_A_2{
    public static void main(String[] args) {
        GM m=new GM();
        Thread t1=new Thread(m);
        GA a=new GA();
        Thread t2=new Thread(a);
        t1.start();
        t2.start();
    }
}