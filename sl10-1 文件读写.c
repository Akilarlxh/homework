/*sl10-1*/
/*把从键盘上输入的字符原样输出到文件file_1.txt
中，用字符#作为键盘输入结束的标志，再从磁盘文件
file_1.text文件中读取字符并显示到屏幕上 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("file_1.txt","w"))==NULL){
		printf("Cannot open this file！\n");
		exit(0);
	}
	ch=getchar();
	while(ch!='#'){
		fputc(ch,fp);
		ch=getchar();
	}
	fclose(fp);
	if((fp=fopen("file_1.txt","r"))==NULL){
		printf("Cannot open this file！\n");
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF){
		putchar(ch);
	}
	fclose(fp);
 } 
