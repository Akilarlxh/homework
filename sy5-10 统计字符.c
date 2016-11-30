/*sy5-10*/
/* 
输入一行字符，分别统计出其中字母、空格、数字和其
他字符的个数。
*/
#include<stdio.h>
int main()
{
	char ch;
	int a=0,b=0,c=0,d=0,e=0;
	while((ch=getchar())!='\n'){
		if(ch>='A'&&ch<='Z')
			a++;
		else if(ch>='a'&&ch<='z')
			b++;
		else if(ch>='0'&&ch<='9')
			c++;
		else if(ch==' ')
			d++;
		
		else 
			e++;
	}
	printf("大写字母=%d\n小写字母=%d\n\
数字=%d\n空格=%d\n其他字符=%d\n",a,b,c,d,e);
	return 0;
}
