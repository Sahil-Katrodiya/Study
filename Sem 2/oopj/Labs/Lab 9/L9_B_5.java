interface Shape{
    void getArea();
}
class Rectangle implements Shape{
    public void getArea(){
        System.out.println("Area of Rectangle");
    }
}
class Circle implements Shape{
    public void getArea(){
        System.out.println("Area of Circle");
    }
}
class Triangle implements Shape{
    public void getArea(){
        System.out.println("Area of Triangle");
    }
}
public class L9_B_5{
    public static void main(String[] args){
        Rectangle r=new Rectangle();
        Circle c =new Circle();
        Triangle t=new Triangle();
        r.getArea();
        c.getArea();
        t.getArea();
    }
}