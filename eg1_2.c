#include <stdio.h>

/* 当fahr = 0, 20, ...，300时，分别
打印华氏温度与摄氏温度对照表*/

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;//温度表的下限
	upper = 300;//温度表的上限
	step = 20;//步长

	fahr = lower;
	//printf("title\n"); lx1-3.c
	while (fahr <= upper) {
		celsius = 5.0 * (fahr - 32.0)/9.0 ;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}




// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
