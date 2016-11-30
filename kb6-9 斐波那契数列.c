/*kb6-9*/
/*
编写递归函数计算实现斐波那契数列 
*/
#include <stdio.h>
int f(int n);
int main()
{
	int n;
	printf("请输入n的值");
	scanf("%d",&n);
	printf("f(%d)=%d",n,f(n));
 } 
int f(int n)
{
	if(n==0){
		int f0=0;
		return f0;
	}
	if(n==1){
		int f1=1;
		return f1;
	}
 	int fn=f(n-2)+f(n-1);
 	return fn;
}
