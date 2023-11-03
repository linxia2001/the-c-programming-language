//字符计数
#include<stdio.h>

//统计输入的字符数
/*int main()
{
	long nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n",nc);
}*/

int main()
{
	double nc;

	for(nc = 0;getchar() != EOF;++nc)
		;//c语言的语法规则要求for循环必须有一个循环体，因此用单独的分号代替
	printf("%.0f\n",nc);
}