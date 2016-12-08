/*sy7-9*/
/*
编写一个将字符串逆序的函数 
*/
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	for(int cnt=0;cnt<strlen(str)/2;cnt++){
		char temp; 
		temp=str[cnt];
		str[cnt]=str[strlen(str)-1-cnt];
		str[strlen(str)-1-cnt]=temp;
	}
	printf("%s",str);
}
 
