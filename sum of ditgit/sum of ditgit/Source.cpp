#include<stdio.h>

int a(int);

int main()
{
	int num;
	scanf_s("%d", &num);

	printf("%d", a(num));
	return 0;
}

int a(int num) // initial of Loop
{
	int R = 0;
	if (num > 10 || num == 10)
	{
		for (; num != 0; num /= 10)
		{
			R += num % 10;
		}
		a(R);// Loop
	}
	else
	{
		return num;
	}
}