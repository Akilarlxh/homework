/*sy5-15*/
/*编写程序，随机产生20个两位正整数，将其中的前
10个数字从小到大排序，后10个数字从大到小排序，
然后按每行10个输出这20个数字 */ 

#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int num[20]={0},m,n;
	for(m=0;m<20;m++){
		while(num[m]<10)
			num[m]=rand()%100;
			//0-99 题目要求10-99
	} 
	for(m=0;m<20;m++){
		printf("%d ",num[m]);
		if(m==9) puts("\n");
	} 
	puts("\n");
	/*给前10个值从小到大排序;
	给后10个值从大到小排序;
	输出这20个值；*/ 
	for(m=0;m<10;m++) {
		for(n=m;n<10;n++){
			if(num[m]>num[n]){
				int t;
				t=num[m];
				num[m]=num[n];
				num[n]=t;
			}
		}
	}
	for(m=10;m<20;m++) {
		for(n=m;n<20;n++){
			if(num[m]<num[n]){
				int t;
				t=num[m];
				num[m]=num[n];
				num[n]=t;
			}
		}
	}
	for(m=0;m<20;m++) {
	printf("%d ",num[m]);
	if(m==9) puts("\n");
	}
	
}
