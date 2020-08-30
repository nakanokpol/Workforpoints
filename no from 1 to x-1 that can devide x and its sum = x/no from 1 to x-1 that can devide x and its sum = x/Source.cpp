#include<stdio.h>

int b(int);

int main()
{
	int sum, n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i == b(i)) // loop in loop
		{
			printf("%d\n", i);
		}
	}

}

int b(int num)
{
	int sum =0;
	for (int i = 1; i <= num - 1; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
