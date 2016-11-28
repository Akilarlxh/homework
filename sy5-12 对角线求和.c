/*sy5-12*/
/*编程输入一个n*n矩阵中各元素的值，从键盘输入n
的值,并求出两条对角线上各元素的和*/
/*该题需要考虑n是奇数还是偶数，奇数的话中间数
会被重复记两次*/

#include <stdio.h>
int main()
{
	int N,m,n,sum1=0,sum2=0,sum;
	printf("请输入N的值：\n");
	scanf("%d",&N);
	int num[N][N];//在c99里可以这么做
	for(m=0;m<N;m++){                                
		for(n=0;n<N;n++){                              
			scanf("%d",&num[m][n]);                    
		}                                   
	}//二维数组写入数据
	for(m=0,n=0;m<N;m++,n++){
		sum1=sum1+num[m][n];
	}
	for(m=0,n=N-1;m<N;m++,n--) {
		sum2=sum2+num[m][n];
	}
	if(N%2==0){
		sum=sum1+sum2;
	}
	else{
		sum=sum1+sum2-num[N/2][N/2];
	}
	printf("%d",sum);
} 
 
