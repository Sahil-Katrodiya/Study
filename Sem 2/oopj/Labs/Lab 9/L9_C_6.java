/*Write a Java program to create an interface Playable with a method play() that takes no
arguments and returns void. Create three classes Football, Volleyball, and Basketball
that implement the Playable interface and override the play() method to play the
respective sports. [C]*/

interface Playable{
    void play();
}
class Football implements Playable{
    public void play(){
        System.out.println("Football is Running");
    }
}
class Volleyball implements Playable{
    public void play(){
        System.out.println("Volleyball is Running");
    }
}
class Basketball implements Playable{
    public void play(){
        System.out.println("Basketball is Running");
    }
}
public class L9_C_6{
    public static void main(String[] args) {
        Playable f=new Football();
        Playable v=new Volleyball();
        Playable b=new Basketball();

        f.play();
        v.play();
        b.play();
    }
}