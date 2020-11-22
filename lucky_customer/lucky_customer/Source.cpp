#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

bool NumCustomerCheck(int x)
{
	if (x > 99)
	{
		printf("The Number of customers are more than 99, please try again");

		return false;
	}
	else if (x <= 0)
	{
		printf("The Number of customer is undefined.");

		return false;
	}
	return true;
}
bool priceCheck(int x)
{
	if (x >= 1500)
	{
		return true;
	}
	else if (x < 1500)
	{
		return false;
	}
	return false;
}

int main()
{
	int tel[100] = {};
	int telPassed[100] = {};
	int customerId[100] = {}; //Passed

	int N = 0;

	for (int i = 0; i <= 99; i++)
	{
		tel[i] = 0;
		telPassed[i] = 0;
		customerId[i] = 0;
	}

	scanf("%d", &N); // the number of customers

	if (!NumCustomerCheck(N))
	{
		return 0;
	}
	else if (NumCustomerCheck(N))
	{
		int* p_telPassed = telPassed;
		int* p_customerId = customerId;

		int num = 0;

		for (int i = 0; i < N; i++)
		{
			int temp_cost = 0;
			int temp_tel = 0;

			scanf("%d", &temp_tel);
			scanf("%d", &temp_cost);

			if (priceCheck(temp_cost))
			{
				*(p_telPassed + num) = temp_tel;
				*(p_customerId + num) = i;
				num++;
			}
		}
		int numChance = num; // more number than max index = 1
		printf("the number of Chance Customers is : %d\n", numChance);
		printf("Chance Customers :\n");

		for (int i = 0; i < numChance; i++)
		{
			printf("Customers ID : ");

			if (customerId[i] <= 9)
			{
				printf("0000");
			}
			else if (customerId[i] <= 99)
			{
				printf("000");
			}
			else if (customerId[i] <= 999)
			{
				printf("00");
			}
			else if (customerId[i] <= 9999)
			{
				printf("0");
			}

			printf("%d  TEL : ", customerId[i]);

			if (telPassed[i] <= 9)
			{
				printf("000000000");
			}
			else if (telPassed[i] <= 99)
			{
				printf("00000000");
			}
			else if (telPassed[i] <= 999)
			{
				printf("0000000");
			}
			else if (telPassed[i] <= 9999)
			{
				printf("000000");
			}
			else if (telPassed[i] <= 99999)
			{
				printf("00000");
			}
			else if (telPassed[i] <= 999999)
			{
				printf("0000");
			}
			else if (telPassed[i] <= 9999999)
			{
				printf("000");
			}
			else if (telPassed[i] <= 99999999)
			{
				printf("00");
			}
			else if (telPassed[i] <= 999999999)
			{
				printf("0");
			}
			printf("%d\n", telPassed[i]);
		}
	}
	return 0;
}