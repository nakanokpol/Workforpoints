#include<stdio.h>

int main()
{
	int a, n;
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++)
	{
		for (int m = n;m < n + i;m++)
		{
			printf(" ");
		}
		printf("*");
		for (int j = 1;j < n - i;j++)
		{
			printf(" ");
		}
		for (int j = 1;j < n - i - 1;j++)
		{
			printf(" ");
		}
		if (i != n - 1)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int x = 0;x < n - 1;x++)
	{
		for (int y = 1;y < n - x - 1;y++)
		{
			printf(" ");
		}
		printf("*");
		for (int m = n;m < n + x;m++)
		{
			printf(" ");
		}
		for (int m = n - 1;m < n + x;m++)
		{
			printf(" ");
		}
		printf("*");

		printf("\n");
	}
}