#include<stdio.h>
#include<math.h>

int main()
{
	int a[5], b;
	for (int i = 0; i <= 4;i++)
		scanf_s("%d", &a[i]);

	scanf_s("%d",&b);

	if (b > 0 && b <= 4)
		for (int j = b - 1; j <= 4; j++)
			printf("%d = %d\n", j, a[j]);

	else if (b < 0 && abs(b) <= 4)
		for (int j = 4; j >= 5 - b; j--)
			printf("%d = %d\n", j, a[j]);

	else
		printf("last input is int -5 to 5 except 0 only");

	return 0;
}