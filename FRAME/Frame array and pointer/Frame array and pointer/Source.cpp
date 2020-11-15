#include<stdio.h>

int main()
{
	int x=0;
	int n[x];
	scanf("%d", &x);
	int* p;
	for (int i = 1; i <= x; i++)
	{

	}
	/*scanf_s("%d", &);
	p = n;*/

	printf("%d", *p);
	/*for (int i = 1; i <= n; i++)
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
	}*/
	return 0;
}