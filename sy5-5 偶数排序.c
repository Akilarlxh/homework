/*sy5-5*/
/*������a���±�ֵΪż����Ԫ�ش�С��������
����Ԫ�ز���*/
#include <stdio.h>
int main()
{
	int a[10]={4,9,45,21,6,36,8,0,12,19};
	int i,j,t;
	for( i=0;i<10;i+=2 ){
		for( j=i;j<10;j+=2 ){
			if( a[i]>a[j] ){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		} 
	} 
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
 } 
