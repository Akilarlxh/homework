/*kb5-5*/
/*输入10个学生的学号和3门课程的成绩，统计
并输出3门课程总分最高的生的学号和总分*/
#include <stdio.h>
int main()
{
	int grade[10][4],sum[10];
	int m,n,max=0;
	for(m=0;m<10;m++){
		for(n=0;n<4;n++){
			scanf("%d",&grade[m][n]);
		}	
		sum[m]=grade[m][1]+grade[m][2]+grade[m][3];
	} 
	for(int cnt=0;cnt<10;cnt++){
		if(max<sum[cnt]){
			max=sum[cnt];
			m=cnt;
		}
	}
	for(n=0;n<4;n++){
		printf("%d ",grade[m][n]);
	}	
 } 
