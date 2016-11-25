/*kb5-4*/
#include <stdio.h>
int main()
{
	int a[10]={4,9,45,21,6,36,8,0,12,19};
	int i,j,t;
	for(i=0;i<9;i++){
		for(j=1;j<10;j++){
			if(a[j-1]>a[j]){
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	} 
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
 } 
