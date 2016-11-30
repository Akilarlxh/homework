/*kb6-6*/
/*
编程处理一批数据，要求：
(1)随机产生20个[10,99]范围内的整数。
(2)以每行5个输出这批整数。
(3)对这批数据进行升序排列，并输出排序后的结果
(4)计算这批数据的平均值
(5)分别统计大于、等于和小于平均值得数据个数 
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void producenum(int *num);
void print_5(int *num);
void num_raise(int *num);
float num_ave(int *num);
void sta_num(int *num,float ave);
int main()
{
	int num[20];
	float ave;
	srand(time(0));
	producenum(num);
	num_raise(num);
	print_5(num);
	ave=num_ave(num);
	sta_num(num,ave);
}
void producenum(int *num){
	for(int n=0;n<20;n++,num++){
		*num=rand()%90+10;
	}
}
void print_5(int *num){
	for(int n=0;n<20;n++,num++){
		printf("%d ",*num);
		if((n+1)%5==0){
			printf("\n");
		}
	}
}
void num_raise(int num[]){
	int m,n;
	for(m=0;m<20;m++){
		for(n=m;n<20;n++){
			if(num[m]>num[n]){
				int t;
				t=num[m];
				num[m]=num[n];
				num[n]=t;
			}
		}
	}
}
float num_ave(int *num){
	int n;
	float sum=0;
	for(n=0;n<20;n++,num++){
		sum+=*num;
	}
	sum/=20;
	//printf("%f",sum);
	return sum;
}
void sta_num(int *num,float ave){
	int a=0,b=0,c=0,n;
	for(n=0;n<20;n++,num++){
		if(*num>ave){
			a++;
		}
		else if(*num<ave){
			b++;
		}
		else{
			c++;
		}
	}
	printf("大于平均数%d个\n等于平均数%d个\n小于平均数%d个",a,c,b);
}
