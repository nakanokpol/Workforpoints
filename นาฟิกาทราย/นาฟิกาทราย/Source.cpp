#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);

	int l = (2 * n) - 1;
	for (int i = 1; i <= l; i++)
	{
		for (int k = 1; k <= l;k++)
		{
			if (((k < i || k > l - i) && i < n) || ((k < l - (i - 1) || k > i - 1) && i > n))
			{
				printf(" ");
			}
			else if (i == n)
			{

			}
			else
			{
				printf("*");
			}
		}
		if (i != n)
		{
			printf("\n");
		}
	}
}