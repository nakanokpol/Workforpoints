#include<stdio.h>
int main()
{
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	if (x == 0 || x == 1)
	{
		printf("Factorial Result : %d", x);
	}
	else
	{
		printf("Factorial Result : ");
		if (x < 0)
		{
			printf("-1 x ");
			x = -x;
		}
		for (int i = 2; i <= x;)
		{
			if (x % i == 0)
			{
				printf("%d", i);
				x /= i;
				if (x != 1)
				{
					printf(" x ");
				}
			}
			else
			{
				i++;
			}
		}
	}
	return 0;
}
