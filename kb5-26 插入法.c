/*kb5-26*/
/*插入法把一个给定数据x按大小插入到已经
排好序的数组中，插入后该数组任然有序*/
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
 
