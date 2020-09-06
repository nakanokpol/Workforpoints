#include<stdio.h>

int b(int);
/*void a(int);

int main()
{
	int num;
	scanf_s("%d", &num);
	int x = num;
	a(num);

	if(x<10)printf("%d", x);
	return 0;
}

void a(int num)
{
	int R=0;
	if (num >= 10)
	{
		for (; num != 0 ; num /= 10)
		{
			R += num % 10;
		}
		printf("%d\n", R);
		a(R);
	}
	else
	{
		printf("%d", num);
	}
}*/

int main()
{
	//int sum;
	
	for (int i = 1; i <= 10000; i++)
	{
		if (i == b(i))
		{
			printf("%d\n",i);
		}
	}

}

int b(int num)
{
	int sum = 0;
	for (int i = 1; i <= num - 1; i++)
	{
		if (num % i == 0)
		{
			sum += i;
			//if(num == 496 || num ==8128)
			//printf("i = %d\n", i);
		}
		//printf("sum = %d\n", sum);
	}
	return sum;
}

/*int main()
{
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i <= x -1 ; i++) // 1. บรรทัดลูปแรก
	{
		for (int k = 1; k <= i; k++)
		{
			printf("* ");
		}
		for (int k = 1; k <= (2 * x) - (2*i+1); k++)// บรรทัดลูปสอง
		{
			printf("  ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i <= (2 * x) - 1; i++)
	{
		printf("* ");
	}
	printf("\n");
	for (int i = x-1; i >= 1 ; i--) // บรรทัดลูปสาม
	{
		for (int k = i; k >=1; k--)
		{
			printf("* ");
		}
		for (int k = (2 * x) - (2 * i + 1); k>=1 ; k--)//
		{
			printf("  ");
		}
		for (int k = i; k >= 1; k--)
		{
			printf("* ");
		}
		printf("\n");
	}
}*/