#include<stdio.h>

void DRAW(int, int);

void main()
{
	int h, w;
	printf("Height : ");
	scanf_s("%d", &h);
	printf("Width : ");
	scanf_s("%d", &w);

	DRAW(h, w);
}

void DRAW(int h, int w)
{
	for (int i = 1; i <= h; i++)
	{
		for (int k = h-i; k >= 1 ; k--)
		{
			printf(" ");
		}
		for (int j = 1;j <= w;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}