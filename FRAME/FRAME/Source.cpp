#include<stdio.h>

void FRAME(int);

void main()
{
	int n;
	scanf_s("%d", &n);
	FRAME(n);
}

void FRAME(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n;j++)
		{
			if (((i == 2 || i == n - 1) && (j >= 2 && j <= n - 1)) || ((j == 2 || j == n - 1) && (i >= 2 && i <= n - 1)))
			{
				printf("  ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}