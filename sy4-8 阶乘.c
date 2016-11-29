/*sy4-8*/
/*编程计算1+1/3!+1/5!+...+1/(2n-1)!,直到最
后一项小于0.000001，并统计一共计算了多少项*/
#include <stdio.h>
int fact(float number);//函数声明           
int main()                                                                 
{                                      
	float cnt,num=0;                 
	for(cnt=0;;cnt++){                       
		num+=1.0/fact(2*cnt+1);            
		if(1.0/fact(2*cnt+1)<0.000001) {	
		break;                               
		} 
	}
	printf("%f\n%.0f",num,cnt+1);          
}
                                        
int fact(float number)       
{
	float num=1,i;                     
	for(i=1;i<=number;i++){	
		num*=i;	
	}
	return num;                      
}                      

 
