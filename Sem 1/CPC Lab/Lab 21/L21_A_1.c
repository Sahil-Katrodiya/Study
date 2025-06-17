#include<stdio.h>
struct Employee
{
	float sal;
	char s[100];
	int eid;
};
void main()
{
	struct Employee e1={100000,"ramu",12234};
	printf("\n%f",e1.sal);
	printf("\n%s",e1.s);
	printf("\n%d",e1.eid);
}
