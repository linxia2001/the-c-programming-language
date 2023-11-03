#include<stdio.h>

//编写一个程序打印摄氏温度转换为响应华氏温度的转换表

int main()
{
	int fahr;
	//for (fahr = 0; fahr <= 300; fahr = fahr + 20)正序输出
	for(fahr = 300;fahr >=0; fahr = fahr -20)//逆序输出
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}