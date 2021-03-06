﻿/*sy7-2*/
/*
以下程序将输入的十进制整数转换为16进制，并将输出
结果以字符串形式输出，请将程序补充完整。 
*/
#include <stdio.h>
#include <string.h>
char trans(int x)
{
	if(x<10) return '0'+x;
	else return 'a'+x-10;
}
int DtoH(int n,char *str)
{
	int i=0;
	while(n!=0){
		str[i]=trans(n%16);
		n/=16;
		i++;
	}
	return i-1;
}
int main()
{
	int i,k,n;
	char str[32];
	scanf("%d",&n);
	k=DtoH(n,str);
	for(i=0;i<=k;i++){
		printf("%c",str[k-i]);
	}
}
