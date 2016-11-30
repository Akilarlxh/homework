/*sy6-12*/
/*编写一个程序，判断输入的一个字符串是否回文，
若是回文则输出YES，否则输出NO。所谓回文是顺读
和倒读都一样的字符串*/
#include <stdio.h>
#include <string.h>
int main()
{
	int cnt,flag=1;
	char str[100];
	scanf("%s",str);
	for(cnt=0;cnt<=strlen(str)/2;cnt++){
		if(str[cnt]!=str[strlen(str)-1-cnt]){
			flag=0;
		}
	}
	if(flag==0)
		printf("NO");
	else
		printf("YES");
}
