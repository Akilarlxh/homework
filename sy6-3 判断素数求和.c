/*sy6-3*/
/*以下程序的功能，从键盘上输入10个自然数，然后
将他们存入数组a中。统计数组a中所有素数的和。但
其中存在多处错误，上机调试并改正这些错误*/
#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,a[10],sum=0;
	printf("input 10 positive integers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=2;j<=sqrt(a[i]);j++){
			if(a[i]%j==0) break;
		}
		if(j>sqrt(a[i]) &&a[i]!=1){
			sum+=a[i];
		}
	} 
	printf("%d",sum);
	return 0;
 } 

