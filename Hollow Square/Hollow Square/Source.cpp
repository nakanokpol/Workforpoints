#include<stdio.h>

int main()
{
	int a;
	printf("Enter number : ");
	scanf_s("%d", &a);
	printf("\n");
	for (int i = 1; i <= a;i++)
	{
		if (i == 1 || i == a)
		{
			for (int j = 1; j <= a; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		if (i > 1 && i < a)
		{
			printf("* ");
			for (int k = 1; k < a - 1; k++)
			{
				printf("  ");
			}
			printf("*\n");
		}
	}
	return 0;
}
