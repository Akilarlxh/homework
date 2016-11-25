/*kb5-24*/
/*顺序查找(在一组数据中查找某数) 
在已知的10个数据中，查找某个给定的数据x,如果有则返
回该数据位置（存在,下标为）,没有则输出：该数不存在*/
#include <stdio.h>
int main()
{
	int num[10]={12,34,1,3,67,89,28,61,9,87};
	int flag=-1,x,i;
	printf("请输入一个想要查找的数字：");
	scanf("%d",&x);
	for(i=0;i<10;i++){//遍历数组 
		if(x==num[i]){
			flag=i;//标志 
			break;
		}
	}
	if(flag==-1)
		printf("该数字不存在");
	else
		printf("存在，该数的下标是%d",flag); 
}
