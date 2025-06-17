class FirstThread extends Thread{
    int n;
    public FirstThread(int n){
        this.n=n;
    }
    if(n%2==0){
        SecondThread s=new SecondThread(n);
        s.start();
        s.getsquare();
    }
    else{
        
    }
}
class SecondThread extends Thread{}
class ThirdThread extends Thread{}
public class L11_B_5 {
    public static void main(String[] args) {
        
    }
}
