/*sl10-2*/
/*
从键盘上输入若干行字符，把他们输出到C盘根目录的
file_2.txt文件中保存，再从file_2.txt文件中读取
字符串输出在屏幕上
*/ 
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int main()
{
	FILE *fp;
	char str[100];
	if((fp=fopen("C:\\file_2.txt","w"))==NULL){
		printf("Cannot open this file!\n");
		exit(0);
	}
	while(strlen(gets(str))>0){
		fputs(str,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	if((fp=fopen("C:\\file_2.txt","r"))==NULL){
		printf("Cannot open this file!\n");
		exit(0);
	}
	while(fgets(str,81,fp)!=NULL)
		printf("%s",str);
		fclose(fp);
 } 
