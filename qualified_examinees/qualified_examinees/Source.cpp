#include<stdio.h>
#include<math.h>

bool NumExaminerCheck(int x)
{
	if (x > 10000)
	{
		printf("ERROR::The Number of Examiner more than 10000.");

		return false;
	}
	else if (x <= 0)
	{
		printf("ERROR::The Number of Examiner less than or equal to 0.");

		return false;
	}
	else
		return true;
}
bool idCheck(int x)
{
	if (x > 99999)
	{
		printf("ERROR::The ID of Examiner more than 5 digits");

		return false;
	}
	else if (x < 0)
	{
		printf("ERROR::The ID of Examiner is less than 0.");

		return false;
	}
	else
		return true;
}
bool scoreCheck(int x)
{
	if (x > 100)
	{
		printf("ERROR::The Score of Examiner more than 100.");

		return false;
	}
	else if (x < 0)
	{
		printf("ERROR::The Score of Examiner is less than 0.");

		return false;
	}
	else
		return true;
}

int main()
{
	int id[10000] = {};
	int score[10000] = {};

	float sum = 0;
	float avr = 0;

	int N = 0;

	for (int i = 0; i < 10000; i++)
	{
		id[i] = 0;
		score[i] = 0;
	}

	int* p_id = id;
	int* p_score = score;

	scanf_s("%d", &N);
	if (!NumExaminerCheck(N)) 
	{
		return 0;
	}
	else 
	{
		for (int i = 0; i < N; i++)
		{
			int temp_id = 0;
			int temp_score = 0;

			scanf_s("%d", &temp_id);
			if (!idCheck(temp_id))
				return 0;

			*(p_id + i) = temp_id;

			for (int j = 0; j < i ; j++)
			{
				if (id[i] == id[j])
				{
					printf("ERROR::This ID was already inputed.");
					return 0;
				}
			}

			scanf_s("%d", &temp_score);
			if (!scoreCheck(temp_score))
				return 0;

			*(p_score + i) = temp_score;

			sum += temp_score;
		}

		avr = sum / N;
		printf("\nAverage : %.2f\n", avr);

		int K = 0;

		p_id = id;
		p_score = score;

		for (int i = 0; i < N; i++)
		{
			if (id[i] >= avr)
			{
				++K;
			}
		}
		printf("Pass : %d\n", K);

		int n = 0;

		for (int i = 0; i < N; i++)
		{
			if (score[i] >= avr)
			{
				if (id[i] <= 9)
				{
					printf("0000");
				}
				else if (id[i] <= 99)
				{
					printf("000");
				}
				else if (id[i] <= 999)
				{
					printf("00");
				}
				else if (id[i] <= 9999)
				{
					printf("0");
				}

				printf("%d %d", id[i], score[i]);

				++n;

				if(n < K)
				{
					printf("\n");
				}
			}
		}
	}
	return 0;
}