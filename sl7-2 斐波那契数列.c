/*sl7-2*/
/*
定义和调用函数计算并输出斐波那契数列的前10项之和 
*/
#include <stdio.h>
void fun(int fib[],int n);
int main()
{
	int i,sum,a[10];
	fun(a,10);
	sum=0;
	for(i=0;i<10;i++){
		sum+=a[i];
	}
	printf("sum=%d",sum);
}
void fun(int fib[],int n)
{
	int i;
	fib[0]=fib[1]=1;
	for(i=2;i<n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
} 
