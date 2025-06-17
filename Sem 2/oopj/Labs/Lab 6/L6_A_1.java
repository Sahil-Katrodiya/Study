class Circle{
	double radius;
	public void setRadius(double radius){
		this.radius=radius;
	}
	public double areaOfCircle(){
		return Math.PI*radius*radius;
	}
}
public class L6_A_1{
	public static void main(String[] args){
		Circle c1 = new Circle();
		c1.setRadius(10);
		System.out.println(c1.areaOfCircle());
	}
}