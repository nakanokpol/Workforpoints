#include<stdio.h>

int main()
{
	int N, K;
	int a[350000], b[80];// 35000=(6+1)*50000 , 80 =(3+1)*20

	scanf_s("%d", &N);
	int max_a = (7 * N) - 2;

	if (N >= 1 && N <= 50000)
	{
		for (int i = 0; i <= max_a; i++)//(6*N)+(N-1)-1 = (7*N)-2
		{
			scanf_s("%d", a[i]);
			if (((i + 1) % 7 == 0  && a[i]!=' ')|| ((i + 1) % 7 != 0 && a[i] == ' '))
			{
				printf("ERROR, The lottery code must br have 6 digits.");
				return 0;
			}
		}
		scanf_s("%d", &K);
		if (K >= 1 && K <= 20)
		{
			for (int i = 0; i <= (4*K)-2; i++)//(3*K)+(K-1)-1 = (4*K)-2
			{
				scanf_s("%d", b[i]);
				if (((i + 1) % 4 == 0 && b[i] != ' ') || ((i + 1) % 4 != 0 && b[i] == ' '))
				{
					printf("ERROR, The lottery code must br have 3 digits.");
					return 0;
				}
			}
		}
		else
		{
			printf("ERROR!, The number must be between 1 to 20 only.");
		}
	}
	else
	{
		printf("ERROR!, The number must be between 1 to 50000 only.");
	}
	return 0;
}