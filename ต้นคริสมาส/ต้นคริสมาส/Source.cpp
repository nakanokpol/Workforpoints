#include<stdio.h>

int main()
{
	int a, b, c;
	int i, n, o;

	scanf_s("%d", &a);

	for (i = 1;i <= a;i++)
	{
		if (i % 2 == 1)  //odd no.
		{
			for (n = 1;n <= a - i;n++)
			{
				printf(" ");
			}
			for (n = 1;n <= i;n++)
			{
				printf("*");
			}
		}
		else  //even no.
		{
			for (n = 1;n <= a - i;n++)
			{
				printf(" ");
			}
			for (n = 1;n < i;n++)
			{
				printf(" ");
			}
			for (n = 1;n <= i;n++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}