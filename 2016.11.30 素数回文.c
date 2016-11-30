2016.11.30
/*sy6-2*/
/*用行指针输出二维数组*/ 
#include <stdio.h>
#define N 3
#define M 4
void main()
{	int a[N][M]={1,3,5,7,9,11,13,15,17,19,21,23};
	int (*p)[4]=a,i,j;
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			printf("%d ",*(*(p+i)+j));
			printf("%d ",a[i][j]);
}
/*
对于元素a[1][2],其地址用列指针表示为a[1]+2，
等价表示为*(a+1)+2，那么内容是*(*(a+1)+2)


/a和p指向[0][0],但p是数组指针，指向有4个
元素的一维数组，所以p+1为a[0][0]向后4个元
素，即a[1][0].*p指向首地址，为整形指针，
(*p)+1指向a[0][1]*/

/*p是行指针
i控制行，j控制列*/




/*sy6-3*/
/*输入10个自然数，判断是否为素数，是素数
则求和*/
#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,a[10],sum=0;
	printf("请输入10个正整数：\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}//读入数据 
	for(i=0;i<10;i++){
		for(j=2;j<=sqrt(a[i]);j++){
			if(a[i]%j==0) break;
		}//判断是否为素数 
		if(j>sqrt(a[i]) && a[i]!=1) {
			sum+=a[i];
		}//举例:11  根号后取整3   4>3
	}
	printf("%d",sum);
 } 

/*sy6-12*/
/*判断输入的一个字符串是否为回文
回文指的是正读和倒读相同*/
#include <stdio.h>
#include <string.h>
int main()
{
	int cnt,flag=1;
	char str[1000];
	scanf("%s",str);
	for(cnt=0;cnt<=strlen(str)/2;cnt++){
		if(str[cnt]!=str[strlen(str)-1-cnt]){
			flag=0;
		}
	}
	if(flag==0)
		printf("NO");
	else
		printf("YES");
}

