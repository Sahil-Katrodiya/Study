import java.util.Scanner;

class MyPoint{
    double x;
    double y;
    double z;

    public MyPoint(){
        x=0;
        y=0;
        z=0;
    }

    public MyPoint(double x,double y){
        this.x=x;
        this.y=y;
        this.z=0;
    }

    public void display(double x,double y){
        System.out.println("("+this.x+","+this.y+")");
    }

    public MyPoint(double x,double y,double z){
        this.x=x;
        this.y=y;
        this.z=z;
    }

    public void display(double x,double y,double z){
        System.out.println("("+this.x+","+this.y+","+this.z+")");
    }

    public double distance(MyPoint p){
        return Math.sqrt(Math.pow((this.x-p.x),2)+Math.pow((this.y-p.y),2)+Math.pow((this.z-p.z),2));
    }
}

public class L7_C_6{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter 1 for 2D-Point and 2 for 3D-Point");
        int temp=sc.nextInt();

        double x;
        double y;
        double z;
        MyPoint p1;
        MyPoint p2;
        if(temp==1){
            System.out.println("Enter X co-ordinate of point");
            x=sc.nextDouble();
            System.out.println("Enter Y co-ordinate of point");
            y=sc.nextDouble();
            p1=new MyPoint();
            p2=new MyPoint(x,y);
            p2.display(x,y);
            double ans=p1.distance(p2);
            System.out.println("Distance is = "+ans);
        }
        else{
            System.out.println("Enter X co-ordinate of point");
            x=sc.nextDouble();
            System.out.println("Enter Y co-ordinate of point");
            y=sc.nextDouble();
            System.out.println("Enter Z co-ordinate of point");
            z=sc.nextDouble();
            p1=new MyPoint();
            p2=new MyPoint(x,y,z);
            p2.display(x,y,z);
            double ans=p1.distance(p2);
            System.out.println("Distance is = "+ans);
        }

        
        

        


    }
}