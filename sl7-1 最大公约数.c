/*sl7-1*/
/*
编写一个求最大公约数函数。在主函数中输入两个整
数，调用该函数后，输出它们的最大公约数。 
*/
#include <stdio.h> 
int gys(int m,int n)
{
	int r,t;
	if(m<n){
		t=n;
		n=m;
		m=t;
	}
	r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n; 
	} 
	return n;
}

int main()
{
	int x,y,z;
	printf("输入两个整数：x,y=?");
	scanf("%d %d",&x,&y);
	z=gys(x,y);
	printf("最大公约数是%d\n",z);
	return 0;
}
 
