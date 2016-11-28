/*sy5-8*/
/*编写程序，找出二维数组中的鞍点，即该位置
上的元素在该行上值最大、在该列上值最小*/ 
#include <stdio.h>
#define M 5
#define N 5
int main()
{
	int number[M][N];
	int m,n;
		printf("请输入一个%d行%d列的数组：\n",M,N);
	for(m=0;m<M;m++){
		for(n=0;n<N;n++){
			scanf("%d",&number[m][n]);		
		}
	}
	int maxnum[M],minnum[N];
	for(m=0;m<M;m++){
		maxnum[m]=number[m][0];
		for(n=0;n<N;n++){
			if(maxnum[m]<number[m][n]){
				maxnum[m]=number[m][n];
			}
		}	
	}
	for(n=0;n<N;n++){
		minnum[n]=number[0][n];
		for(m=0;m<M;m++){
			if(minnum[n]>number[m][n]){
					minnum[n]=number[m][n];
			}
		}
	}
	int t=0;
	for(m=0;m<M;m++){
		for(n=0;n<N;n++){
			if(maxnum[m]==minnum[n]){
				printf("鞍点是第%d行第%d个\n",m+1,n+1);	
				t=1;
			}
		}	
	}
	if(t==0)
	  printf("该数组不存在鞍点。\n");
}
 
