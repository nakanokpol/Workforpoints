#include<stdio.h>
int maxvalue(int, int);

int main()
{
	int a, b, x = 1;
	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("Enter second number : ");
	scanf_s("%d", &b);

	printf("Greatest common divisor : ");
	if (a == 0 || b == 0)
	{
		x = 0;
	}
	else
	{
		for (int i = 1; i <= maxvalue(a, b); ) 
		{
			if (a % i == 0 && b % i == 0) 
			{
				x *= i;
				a /= i;
				b /= i;
			}
			else 
			{
				i++;
			}
		}
	}
	
	printf("%d", x);
	return 0;
}

int maxvalue(int x, int y)
{
	if (x >= y) 
	{
		return y;
	}
	else 
	{
		return x;
	}
}
