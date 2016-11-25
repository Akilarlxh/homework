/*kb5-6*/
/*输入一个5行6列的数组，将每一行的所有元素都除
以该行上绝对值最大的元素，然后输出数组*/
#include <stdio.h>
#include <math.h>
int main()
{
	float num[5][6],max[5]={0};
	int m,n;
	for(m=0;m<5;m++){
		for(n=0;n<6;n++){
			scanf("%f",&num[m][n]);
		}
	}
	for(m=0;m<5;m++){
		for(n=0;n<6;n++){
			max[m]=max[m]>fabs(num[m][n])?
			max[m]:num[m][n];
		}
	}	
	for(m=0;m<5;m++){
		for(n=0;n<6;n++){
			num[m][n]=num[m][n]/max[m];
			printf("%f ",num[m][n]);
		}
		printf("\n");
	}
	return 0;
 } 
