#include<stdio.h>
/*int main()
{
	int n;
	scanf_s("%d", &n);

	int l = (2 * n) - 1;
	for (int i = 1; i <= l; i++)
	{
		for (int k = 1; k <= l;k++)
		{
			if (((k < i || k > l - i) && i < n) || ((k < l - (i - 1) || k > i - 1) && i > n))
			{
				printf(" ");
			}
			else if (i == n)
			{

			}
			else
			{
				printf("*");
			}
		}
		if (i != n)
		{
			printf("\n");
		}
	}
}*/
/*#include<stdio.h>
#include<conio.h>*/
int main()
{
	int d, m, y;
	while (true)
	{
		scanf_s("%d", &d);
		if (d < 0)
		{
			printf("ERROR");
		}
		else
		{
			scanf_s("%d", &m);
			if (d == 0 && m == 0)
			{
				scanf_s("%d", &y);
				if (y == 0)
				{
					printf("BYE..");
					break;
				}
				else if (y > 0)
				{
					printf("DATE MONTH ERROR1");
				}
			}
			else if ((d <= 0 || d > 31) && (m <= 0 || m > 12))
			{
				printf("DATE MONTH ERROR2\n");
			}
			else if ((d <= 0 || d > 31) && m >= 1 && m <= 12)
			{
				printf("DATE ERROR1\n");
			}
			else if ((d >= 1 && d <= 31) && (m > 12 || m < 1))
			{
				printf("MONTH ERROR\n");
			}
			else if (d >= 1 && d <= 29 && m == 2)// feb code incorrect need to be repaired
			{
				if ((m % 4 != 0 || (m % 100 == 0 && m % 400 != 0)) && d >= 29)
				{
					printf("DATE ERROR(FEB)");
				}
				else if (((m % 4 == 0 && m % 100 != 0) || m % 400 == 0) && d < 29)
				{
					printf("correct feb1");
				}

				if (((m % 4 == 0 && m % 100 != 0) || m % 400 == 0) && d > 29)
				{
					printf("DATE ERROR(FEB2)");
				}
				else if (((m % 4 == 0 && m % 100 != 0) || m % 400 == 0) && d <= 29)
				{
					printf("correct feb2");
				}
			}
			else
			{
				scanf_s("%d", &y);
				if (y <= 0)
				{
					printf("YEAR ERROR");
				}
				else if (y >= 1)
				{
					if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
					{
						if (d >= 1 && d <= 31)
						{
							printf("correct date\n");//xxx
						}
						else
						{
							printf("DATE ERROR2\n");
						}

					}
					else if (m == 4 || m == 6 || m == 9 || m == 11)
					{
						if (d >= 1 && d <= 30)
						{
							printf("correct date2\n");//xxxxxxxx
						}
						else
						{
							printf("DATE ERROR\n");
						}
					}
				}
			}
		}
	}
	//getch;
}
