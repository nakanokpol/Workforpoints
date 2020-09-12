#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n;j++)
		{
			if (i==1||i==n||j==1||j==n||i==j||i==n-j+1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}