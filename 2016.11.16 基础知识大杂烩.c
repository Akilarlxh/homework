/* C语言第四课
基础知识大杂烩 */

//如何定义变量？
用字母、数字、下划线，数字不能在第一个
int a5,_5,_num;
 
//如何使用scanf？
int a;
scanf("%d",&a);

float b;
scanf("%f",&b);

double c;
scanf("%lf",&c);
根据变量的类型选择合适的控制字符
注意：
不要忘了&，否则程序会崩溃 
在scanf里面不要加上多余的东西，
因为scanf里面有什么你就要输入什么
 
//如何使用printf？
int a=5;
printf("%d",a);
如果输出的是变量的值，
不要加上&符号，因为&a输出的是a的地址
 
//如何作赋值？
int a;
a=5;
一个=是赋值
int a=5,b=6;
a=a+b;------a的值是11
=是一个右结合运算符，
这句语句从右往左运算 

//如何交换两个数的值？
int a=5,b=6,t;//t是临时变量
t=a;a=b;b=t;
相当于你有两杯果汁，一杯是苹果汁，还有一杯是葡萄汁，
然后你要交换这两杯果汁，这时候你就需要第三个杯子（t）
 
//如何作判断？if-else语句 
判断大小有>、<还有= 
int a=1,b=2; 
if(a>b){
	a=a+b;
	printf...
}
else if(){
	
}
else{
	
}//3种情况 


//如何写数学表达式？
#include <math.h> 
abs()计算整数的绝对值
fabs()计算浮点数的绝对值
sqrt()开根号
pow()计算次方 注意：pow的返回值是double类型//pow函数的运算结果是浮点数 

//ASCII码有关
%c:对字符做处理 
scanf("%c",&某一个变量);
printf("%c",某一个变量); 
'A'=65;
'a'=97;
大写和小写字母之间的差是32; 

//如何输出一张ASCII码表？ 
#include <stdio.h>
int main()
{
	for(int n=1;n<128;n++){
		printf("%d:%c\n",n,n);
	}
 } 

//switch-case怎么用 
switch(表达式)
{
	case 表达式1:语句1;break; 
	case 表达式2:语句2;break; 
	case 表达式3:语句3;break; 
	......
	case 表达式n:语句n;break; 
	default:语句n+1; 
} 
switch(grades)
{
	case 表达式1:语句1;break; 
	case 表达式2:语句2;break; 
	case 表达式3:语句3;break; 
	......
	case 表达式n:语句n;break; 
	default:语句n+1; 
} 
条件：分支很多的时候，而且这些分支要等距，或者近似等距 
0-59  /10 ----0-5
60-69 /10 ----6
70-79 /10 ----7
.....
90-99 /10 ----9
100   /10 ----10 //近似等距


//&&和||怎么用
&&两个条件都要满足
||两个条件只用满足一个
10<x<100或x<0且x!=-2
((x>10 && x<100) ||x<0) &&x!=-2

//while循环怎么用
循环有三种 while、do while、for
三种循环里面最常用的是for
根据需要选择合适的循环
一般for循环是万能的
 i=0;
 while(条件){
 	要执行的语句; 
 }
 
//do...while语句
do{
	要执行的语句; 
}while(条件);
do while循环最少执行一遍； 

//for循环怎么样
for(初始化动作;循环的条件;每轮循环要做的事) {
    循环要做的语句; 
} 

for(i=0;i<10;i++) {
    printf("%d",i); 
} 
*** 
i=0
while(i<10){
 	printf("%d",i); 
}

//怎么给一维数组赋值
为什么要数组，int a[10000] 
使用数组需要用他的下标
int a[N]
他的下标范围是0 —— N-1。
不能数组越界，越界会造成程序崩溃

int a[10];
for(int cnt=0;cnt<10;cnt++){
	scanf("%d",&a[cnt]);
} //执行10次，每次读入一个数组 

//怎么正序输出一维数组 
for(int cnt=0;cnt<10;cnt++){
	printf("%d",a[cnt]);
} //执行10次，每次输出一个数组 

//如何逆序输出一个一维数组 
for(int cnt=9;cnt>-1;cnt--){
	printf("%d",a[cnt]);
} //执行10次，每次输出一个数组 

//如何输入和输出二维数组 int num[5][6]
for(int m=0;m<5;m++){
	for(int n=0;n<6;n++){
		scanf("%d",&num[m][n]);
	}
} 二维数组输入 
for(int m=0;m<5;m++){
	for(int n=0;n<6;n++){
		printf("%d",num[m][n]);
	}
} 二维数组输出

//指针
int *p;point 指针 程序员的习惯
int* p;int *p;的区别 ——没区别
 p=&a; p=&b;
 int num[10];
 p=num;这里num是数组num[10]的首地址; 

