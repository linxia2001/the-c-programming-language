//读一个字符
//while(该字符不是文件结束指示符)
//     输出刚读入的字符
//     读取下一个字符
#include<stdio.h>

//将输入复制到输出：版本1
int main()
{
	int c;

	/*c = getchar();
    while(c != EOF){
		putchar(c);
		c = getchar();
	}*/
	while((c = getchar()) != EOF)
		putchar(c);
	printf("%d\n",getchar()!=EOF);
	printf("%d\t%c",EOF,EOF);
}