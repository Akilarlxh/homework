//设计一个程序，实现一个猜数游戏。若输入的数大了，就提示数字大了， 
//若输入的数小了，则提示数小了。在输入的过程中，记录输入的次数， 
//最后猜中时，告诉玩家这个数的值和猜数的次数。 

#include <stdio.h>
#include <stdlib.h>
void checknum(int a,int number);
int main()
{
	int number=rand()%100+1;//课本p43随机函数 
	int a=0,count=0;//int a,count=0;和int a=0,count=0;一样吗？请思考 
	printf("我已经想好了一个1到100之间的整数，请猜猜看。\n");
	do{
		printf("请输入这个数。\n");
		scanf("%d",&a);
     	count ++;//记录游戏的次数
		checknum(a,number);
	}while(a!=number);//用！=表示不等于 
	printf("这个数就是%d，恭喜您用了%d次猜中。\n",number,count);
	return 0;
}
void checknum(int a,int number)
{
	if(a>number){
	    printf("您输入的数大了。\n");
	}else if(a<number){
		printf("您输入的数小了。\n"); 
	}
}



