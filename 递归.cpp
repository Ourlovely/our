// 递归.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;
void hannuota(int n, char A, char B, char C)
{
	/*
	如果是一个盘子
		直接将A柱子上的盘子从A移到C
	否则
		先将A柱子上的n-1个盘子借助C移到B
		直接将A柱子上的盘子从A移到C
		最后将B柱子上的n-1个盘子借助A移到C
	*/
	if (1 == n)
	{
		printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", n, A, C);
	}
	else
	{
		hannuota(n - 1, A, C, B);
		printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", n, A, C);
		hannuota(n - 1, B, A, C);

	}
}

int main(void)
{
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	int n;

	printf("请输入要移动盘子的个数 :");
	scanf_s("%d", &n,1);

	hannuota(n, 'A', 'B', 'C');

	return 0;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
