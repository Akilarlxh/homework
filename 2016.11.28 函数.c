/*c语言第7课*/
/*函数*/

//为什么要函数？
C语言中，一个程序无论大小，总是由一个或多个
函数构成，这些函数分布在一个或多个源文件中。

每一个完整的C程序总是有一个main函数，它是程序
的组织者，程序执行时也总是由main函数开始执行
，由main函数直接或间接地调用其他函数来辅助完
成整个程序的功能。

结构化
 
函数充分而生动地体现了分而治之和相互协作的理念。
它可以将一个大的程序设计任务分解为若干个小的任务
，这样便于实现、协作及重用，有效地避免了做什么都
要从头开始进行。

//函数的定义
函数返回值类型  函数名(形参列表)
{
	变量声明部分;
	执行部分;
}

有返回值  int char float double 自定义类型.....
无返回值  void 


//int sum(int begin,int end); 

int sum(int begin,int end); 
int main()
{ 
   int begin,end,allsum;
   scanf("%d %d",&begin,&end);
   allsum=sum(begin,end);
   printf("数的和是%d",allsum); 
} //sum求和函数 
int sum(int begin,int end)
{
	int i,sum=0;//sum=0初始化 
	for(i=begin;i<=end;i++){
		sum+=i//sum=sum+i;
	}
	return sum;
} 

注意点:
调用函数
*1 函数名(参数值); 
*2 没有参数也要有括号() 举例:getchar()、getch(); 
*3 如果有参数，就需要按照正确的顺序和数量去初始
    化函数中的变量 

//return  从函数中返回值
*1 return会停止函数的执行，并送回一个值
*2 return 表达式
*3 return (表达式) 

//没有返回值的函数 
void sum(int begin,int end)
{
	int i,sum=0;//sum=0初始化 
	for(i=begin;i<=end;i++){
		sum+=i//sum=sum+i;
	}
	printf("数的和是%d",sum);
} 

*1 void 函数名 

//函数的声明、函数的先后关系 
int sum(int begin,int end);
编译器从上往下读你的代码;  

//函数的数据传递方式
*1 c语言在调用函数时，永远只能传值给函数
   不是把变量传给函数
*2 swap函数里面的a,b和main函数里面的a,b没有关系 

int main()
{
	int a=5,b=4;
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
} 
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
为什么不用return？因为return只能return 1个值
 
//全局变量
*1 全局变量是放在所有函数外部的变量（包括main函数）
*2 因为上一点，所有函数都能去访问这个变量
   即具有全局的生存期和作用域
*3 它们与任何函数无关

//局部变量（本地变量）
*1 局部变量就是在函数内部 或者一个{}内部的变量
*2 生存期 作用域 

//静态存储变量
常量：这个变量的值不允许改变的;
const int a=5; 
static int b=6;


#include <stdio.h>
int main()
{
	const int a=5; 
	a=6;//只允许读不允许写 
}

//动态存储变量
相对于静态存储变量而言 

