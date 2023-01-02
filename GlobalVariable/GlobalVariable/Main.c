#include "stdio.h"

extern int aaa;

extern int a;
int main()
{
	aaa = 666;
	//a = 100; 静态全局变量会报错！！！

	return 0;
}