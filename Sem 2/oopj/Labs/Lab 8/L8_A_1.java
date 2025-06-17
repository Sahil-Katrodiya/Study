abstract class Vegetable {
    String color;

    Vegetable (String color) {
        this.color = color;
    }
    public abstract String toString();
}
class Potato extends Vegetable {
    public Potato(String color) {
        super(color);
    }
    public String toString() {
        return super.color;
    }
}
class Brinjal extends Vegetable {
    public Brinjal(String color) {
        super(color);
    }
    public String toString() {
        return super.color;
    }
}
class Tomato extends Vegetable {
    public Tomato(String color) {
        super(color);
    }
    public String toString() {
        return super.color;
    }
}

public class L8_A_1{
    public static void main(String[] args) {
        Potato p = new Potato("Brown");
        Brinjal b=new Brinjal("Purple");
        Tomato t=new Tomato("Red");

        System.out.println("Potato is "+p);
        System.out.println("Brinjal is "+b);
        System.out.println("Tomato is "+t);
    }
}