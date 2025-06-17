class Time{
	int hour;
	int minute;

	public Time(int hour,int minute){
		this.hour=hour;
		this.minute=minute;
	}
	public void addition(Time add){
		this.minute+=add.minute;
		if(this.minute>=59){
			this.hour++;
			this.minute-=60;
		}
		this.hour+=add.hour;
		System.out.println(this.hour+":"+this.minute);
	}
}
public class L6_A_2{
	public static void main(String[] args){
		Time t1=new Time(2,45);
		Time t2=new Time(5,45);
		t1.addition(t2);
	}
}