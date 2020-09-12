#include<stdio.h>

int main()
{
	int n, p;
	scanf_s("%d", &n);
	p = 2 * n - 1;
	for (int i = 1;i <= p;i++)
	{
		for (int j = 1;j <= p;j++)
		{
			if (i <= n && (j + i <= n || p - j + i <= n - 1) || i > n && (p - i + j + 1 <= n || 2 * p - i - j + 2 <= n))//2*p-i-j+2<=n or i+j>=n*3
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}