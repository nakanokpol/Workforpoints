#include<stdio.h>

int F(int);

int main()
{
	int N, sum=0;
	printf("How many Employee?\n");
	scanf_s("%d", &N);

	if (N > 20 || N < 1)
	{
		printf("input is 1 to 100 only");
		return 0;
	}
	printf("\n");
	printf("SUM of SALARY : %d Baht", F(N));
}

int F(int N)
{
	int salary[100], sum = 0;
	for (int a = 0; a <= N - 1; a++)
	{
		printf("SALARY(Baht):\n");
		scanf_s("%d", &salary[a]);
	}

	for (int i = 0; i <= N - 1; i++)
	{
		sum += salary[i];
	}
	return sum;
}