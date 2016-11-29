#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int number,people,systemnum;
	int bot=0,top=500;
	printf("请输入参与游戏的玩家人数：");
	scanf("%d",&people); 
	srand(time(0));
	systemnum=rand()%500+1;
	printf("系统会随机给出一个0-500之间的数字，\n请所有玩家输入猜测的数字。\n"); 
	do{
		for(int cnt=1;cnt<=people;cnt++){
			printf("请玩家%d输入数字：",cnt);
			scanf("%d",&number);
			if(number>systemnum){
				top=number;
				printf("数字所在的区间为[%d,%d]\n",bot,top);
			}
			else if(number<systemnum){
				bot=number;
				printf("数字所在的区间为[%d,%d]\n",bot,top);
			}
			else if(number==systemnum){
				printf("恭喜玩家%d猜中了数字，该数字是%d\n奖励为巴掌两个",cnt,number);
				break;
			}
		}
	}while(number!=systemnum);
	getch();
 } 
