#include<stdio.h>

int main()
{
	char a[100];//1
	char b[100];

	char c[100];///////////////////////////////////2
	char d[100];

	printf("Your 1st Input : ");///////////////////1
	scanf_s("%s", a, 99);

	printf("Your 2nd Input : ");///////////////////2
	scanf_s("%s", c, 99);

	char* p = a;//1

	printf("Your Characters : ");

	int i = 0;
	int j = 0;

	while (*p != '\0')
	{
		if ((*p >= 'a' && *p <= 'z'))
		{
			printf("%c", *p - 'a' + 'A');
			b[i] = *p - 'a' + 'A';
			i++;
		}
		if (*p >= 'A' && *p <= 'Z')
		{
			printf("%c", *p);
			b[i] = *p;
			i++;
		}
		p++;
		j++; // the number of loop
	}

	char* q = c;/////////////////////////////////////2

	printf("\nYour Characters : ");

	int m = 0;
	int n = 0;

	while (*q != '\0')
	{
		if ((*q >= 'a' && *q <= 'z'))
		{
			printf("%c", *q - 'a' + 'A');
			d[m] = *q - 'a' + 'A';
			m++;
		}
		if (*q >= 'A' && *q <= 'Z')
		{
			printf("%c", *q);
			d[m] = *q;
			m++;
		}
		q++;
		n++; // the number of loop
	}

	int s = 0;
	if (j >= n && j > 0)
	{
		s = j - 1;
	}
	else if (j == 0 && n ==0)
	{
		s = 0;
	}
	else if (n >= j && n > 0)
	{
		s = n - 1;
	}


	for (int k = 0; k <= s; k++)
	{
		if (b[k] != d[k])
		{
			printf("\nDifferrent!!");
			return 0;
		}
	}
	printf("\nSame!!\n\n");

	return 0;
}