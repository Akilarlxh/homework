/*kb6-3*/
/*编写一个字符串加密函数，加密算法：将每个字母
向后顺序移动5个位置。对于非字母字符，则原样输出*/
#include <stdio.h>
char password(char ch[],int n);
int main()
{
	int n;
	printf("将字母加密（向右移）几位呢？");
	scanf("%d",&n);
	char ch[81];
	scanf("%s",ch);
	password(ch,n);
	puts(ch);
} 

char password(char ch[],int n)
{
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
	return *ch;
} 
 
