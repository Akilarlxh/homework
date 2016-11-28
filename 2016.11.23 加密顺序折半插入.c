/*输入一串字符，将其中的英文字母加密，非英文字母不变。
  限制最多输入80个字符                             
  加密原理：将一个字母由其后面n位的字母替代，若超过z
  则回到头部；n由键盘输入。                       */                    
#include <stdio.h>
int main()
{
	int n;
	printf("将字母加密（向右移）几位呢？")；
	scanf("%d",&n);
	char ch[81];
	scanf("%s",ch);//%s和%c的区别  %s字符串 %c单独一个字符 
	for(int cnt=0;ch[cnt]!='\0';cnt++){
		if(ch[cnt]>='A' && ch[cnt]<='Z'){
			ch[cnt]+=n;
			if(ch[cnt]>'Z'){
				ch[cnt]-=26;
			}
		}
		if(ch[cnt]>='a' && ch[cnt]<='z'){
			ch[cnt]+=n;
			if(ch[cnt]>'z'){
				ch[cnt]-=26;
			}
		}
	} 
	puts(ch);
} 




/*顺序查找(在一组数据中查找某数) 
  在已知的10个数据中，查找某个给定的数据x,如果有则返
  回该数据位置（存在,下标为）,没有则输出：该数不存在*/
#include <stdio.h>
int main()
{
	int num[10]={12,34,1,3,67,89,28,61,9,87};	//int num[N]; 有效下标 0 - N-1 
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



/*折半查找法 (只能对有序数列进行查找)
  由键盘输入一个数，在10个从小到大排好序的数列中查找该
  数，若存在则指出下标，不存在则提示没有找到         */ 
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
   
   

/*插入法
  把一个给定数据x按大小插入到已经排好序的数组中，插入后
  该数组任然有序*/
#include <stdio.h>
#define N 10
int main()
{
	int num[N+1]={1,3,5,7,9,12,15,19,22,33};
	int x,record-1,cnt;
	scanf("%d",&x);
	for(cnt=0;cnt<N-1;cnt++){
		if(x>num[cnt] && x<num[cnt+1]){
			record=cnt;
		}
	}//判断是否满足，并记录cnt下标 
	if(record==-1) {
		num[N]=x;
	}
	else{
		for(cnt=N;cnt>record+1;cnt--){
			num[cnt]=num[cnt-1];
		}
		num[record+1]=x;
	}
	for(cnt=0;cnt<N+1;cnt++){
		printf("%d ",num[cnt]);
	}
}

 
