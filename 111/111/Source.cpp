#include<stdio.h>

void DRAW(int);

int main()
{
	int b;

	scanf_s("%d", &b);
	DRAW(b);
	return 0;
}

void DRAW(int b)
{
	int a[10];
	if (b > 10 || b < 1)
	{
		printf("INPUT IS 1 to 10 ONLY");
	}
	else
	{
		for (int i = 0; i <= b - 1; i++)
		{
			scanf_s("%d", &a[i]);
		}

		printf("\n");

		for (int i = 1; i <= b; i++)
		{
			for (int j = 0;j<=i-1; j++)
			{
				printf("%d", i);
			}
			printf("\n");
		}
	}
}