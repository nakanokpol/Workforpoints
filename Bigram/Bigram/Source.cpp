#include<stdio.h>

void abcd()
{
	int x[100000];
	int a = 0, b = 0, c = 0, d = 0;
	for (int i = 0; i <= 99999; i++)
	{
		scanf_s("%d", &x[i]);
		if (x[i] != 0 && x[i] != 1)
		{
			break;
		}
		if (i >= 1 && x[i - 1] == 0 && x[i] == 0)
		{
			a++;
		}
		if (i >= 1 && x[i - 1] == 0 && x[i] == 1)
		{
			b++;
		}
		if (i >= 1 && x[i - 1] == 1 && x[i] == 0)
		{
			c++;
		}
		if (i >= 1 && x[i - 1] == 1 && x[i] == 1)
		{
			d++;
		}
	}
	printf("\n%d", a);
	printf("\n%d", b);
	printf("\n%d", c);
	printf("\n%d", d);
}

int main()
{
	abcd();
	return 0;
}