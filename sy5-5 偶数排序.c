/*sy5-5*/
/*将数组a中下标值为偶数的元素从小到大排序，
其他元素不变*/
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
 
