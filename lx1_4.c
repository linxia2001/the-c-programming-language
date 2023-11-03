#include<stdio.h>

/* 编写一个程序打印摄氏温度转换为相应华氏温度*/

int main()
{
	int celsius;
	for (celsius = 0; celsius <=300; celsius = celsius +20)
		printf("%3d\t%6.1f\n",celsius,celsius * 9.0 / 5.0 +32);
}