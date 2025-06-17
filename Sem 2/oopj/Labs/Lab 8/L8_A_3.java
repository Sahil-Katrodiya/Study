interface Transport{
    public void deliver();
}
abstract class Animal{
    abstract public void print();
}
class Tiger extends Animal{
    public void print(){
        System.out.println("Method Called by Tiger");
    }
}
class Camel extends Animal implements Transport{
    public void print(){
        System.out.println("Method Called by Camel");
    }
    public void deliver(){
        System.out.println("Camel Delivered");
    }
}
class Deer extends Animal{
    public void print(){
        System.out.println("Method Called by Deer");
    }
}
class Donkey extends Animal implements Transport{
    public void print(){
        System.out.println("Method Called by Donkey");
    }
    public void deliver(){
        System.out.println("Donkey Delivered");
    }
}

public class L8_A_3{
    public static void main(String[] args) {
        Animal a[]=new Animal[4];
        a[0]=new Tiger();
        a[1]=new Camel();
        a[2]=new Deer();
        a[3]=new Donkey();
        for(int i=0;i<4;i++){
            System.out.println();
            if(i==1||i==3){
                ((Transport)a[i]).deliver();
            }
            a[i].print();
        }
    }
}