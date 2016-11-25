/*sy4-7*/
/*编程计算1-1/3!+1/5!-1/7!+...+(-1)^(n-1)/(2n-1)!，
其中n的值在程序运行时由键盘输入*/
#include <stdio.h>
int fact(float number);
int main()
{
	float cnt,num=0;
	float n;
	scanf("%f",&n);
	for(cnt=1;cnt<=n;cnt++){
		num+=pow(-1,cnt-1)/fact(2*cnt-1);
	}
	printf("%f\n",num);
}

int fact(float number)
{
	float num=1;
	float i;
	for(i=1;i<=number;i++){	
		num*=i;	
	}
	return num;
}


