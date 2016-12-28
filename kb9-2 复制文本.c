/*kb6-2*/
/*复制文本*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char ch[80];
	if((fp1=fopen("D:\\sourse.txt","r"))==NULL){
		printf("File could not be opened!\n");
		exit(0);	
	}
	if((fp2=fopen("D:\\destination.txt","w"))==NULL){
		printf("File could not be opened!\n");
		exit(0);
	}
	while(!feof(fp1)){
		fgets(ch,79,fp1);
		fputs(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
 } 
