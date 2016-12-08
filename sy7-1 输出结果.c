/*sy7-1*/
/*
写出下列程序的输出结果 
*/
#include <stdio.h>
int x,y,z;
void p(int *x,int y)
{
	++*x;y--;z=*x+y;
	printf("%d,%d,%d--",*x,y,z);
}
int main()
{
	x=2;y=3;z=4;
	p(&x,y); printf("%d,%d,%d--",x,y,z);
	p(&y,x); printf("%d,%d,%d\n",x,y,z);
 } 
