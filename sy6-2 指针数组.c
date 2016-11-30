/*sy6-2*/
/*输出所有数并求和，用指针*/
#include <stdio.h>
#define N 3
#define M 4
int main()
{
	int a[N][M]={1,3,5,7,9,11,13,15,17,19,21,23};
	int *p[N],i,j,k=0,sum=0;
	for(int i=0;i<N;i++){
		p[i]=a[i];
	}
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			sum+=*p[i];
			printf("%d ",*p[i]++);
		}
	}
	printf("%d",sum);
 } 
