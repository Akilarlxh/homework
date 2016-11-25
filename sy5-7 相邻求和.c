/*sy5-7*/
/*编写程序，输入10个整数存放在数组a中，求出数组a
中各相邻两个元素的和，并将这些和存放在数组b中(例
如：b[1]=a[1]+a[0]),按每行3个元素输出数组b。*/ 
#include <stdio.h>
int main()
{
	int a[10],b[10],n;
	for(n=0;n<10;n++){
		scanf("%d",&a[n]);
	}
	for(n=1;n<10;n++){
		b[n]=a[n]+a[n-1];
		printf("%2d",b[n]);
		if(n%3!=0)
			printf(" ");
		else
			printf("\n"); 
	}
	
 } 
