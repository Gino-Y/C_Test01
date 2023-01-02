#include <stdio.h> //<尖括号> 我引用的系统文件
//#include "" 自定义模块
#pragma once // 只允许被引用一次


int Hello(int i, int j)
{
	return i + j;
}

void main(char argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		char* ddd = argv[i];
		printf("%s \n", ddd);
	}

	int c = Hello(3, 7);
	printf("hello c %i \n", c);
	system("pause"); //暂停命令
}
