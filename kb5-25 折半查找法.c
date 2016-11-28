/*kb5-25*/ 
/*折半查找法 (只能对有序数列进行查找),由键盘输入
一个数，在10个从小到大排好序的数列中查找该数，若
存在则指出下标，不存在则提示没有找到*/ 
/* mid中间 top上界 bot下界*/
#include <stdio.h>
#define N 10
int main()
{
	int num[N]={1,4,7,13,16,19,28,36,49,60};
	int n,mid,bot,top,flag=0; 
	scanf("%d",&n);
	mid=N/2;
	bot=0;
	top=N-1;
	while(flag==0 && bot<=top) { 
		mid=(bot+top)/2;
		if(n==num[mid]){
			flag=1;
			break;
		}
		else if(n<num[mid]){
			top=mid-1;
		}
		else{
			bot=mid+1;
		}
	}
	if(flag){
		printf("找到了，这个数的下标是%d",mid);
	}
	else{
		printf("没有找到"); 
	}
	
}   
 
