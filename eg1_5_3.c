//行计数
#include<stdio.h>
//统计输入的行数
main()
{
	int c,nl;
	nl = 0;
	while((c=getchar()) != EOF)
		if(c =='\n')// ' ','\t',
			++nl;
		printf("%d\n",nl);
}