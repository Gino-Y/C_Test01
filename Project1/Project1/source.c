#include <stdio.h>

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
	system("pause"); //ÔÝÍ£ÃüÁî
}
