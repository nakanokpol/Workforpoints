#include<stdio.h>
int maxvalue(int, int);

int main()
{
	int a, b, x = 1, c, d ,e,f;
	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("Enter second number : ");
	scanf_s("%d", &b);

	c = a;
	d = b;

	printf("Greatest common divisor : ");
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	if (a == 0 || b == 0)
	{
		x = 0;
		printf("%d", x);
		return 0;
	}
	else if (a > 0 && b > 0)
	{
		for (int i = 2; i <= maxvalue(a, b); ) 
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
	if ((c > 0 && d > 0) || c*d<0)
	{
		printf("%d", x);
	}
	else if (c < 0 && d < 0)
	{
		printf("%d", -x);
	}

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
