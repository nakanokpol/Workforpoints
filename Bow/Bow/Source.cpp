#include<stdio.h>

int main()
{
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i < x -1 || i == x - 1; i++)
	{
		for (int k = 1; k < i || k == i ; k++)
		{
			printf("* ");
		}
		for (int k = 1; k <= (2 * x) - (2*i+1); k++)
		{
			printf("  ");
		}
		for (int k = 1; k < i || k == i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i <= (2 * x) - 1; i++)
	{
		printf("* ");
	}
	printf("\n");
	for (int i = x-1; i > 1 || i == 1 ; i--)
	{
		for (int k = i; k > 1 || k == 1; k--)
		{
			printf("* ");
		}
		for (int k = (2 * x) - (2 * i + 1); k>=1 ; k--)
		{
			printf("  ");
		}
		for (int k = i; k > 1 || k == 1; k--)
		{
			printf("* ");
		}
		printf("\n");
	}
}