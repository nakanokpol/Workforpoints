#include<stdio.h>

int main()
{
	char a[100];
	char b[100];
	printf("Your Inputs : ");
	scanf_s("%s", a, 99);

	char* p = a;

	printf("Your Characters : ");

	int i = 0;

	while (*p != '\0')
	{
		
		if (*p < '0' || *p > '9')
		{
			
			printf("%c", *p);
			b[i] = *p;
			i++;
		}
		p++;
	}

	--i;//i �ǡ�����ٻ�ش���� �Ţ����Թ�� 1

	char* q = b;
	if (*q == '\0')
	{
		printf("\nERROR::DON'T_HAVE_ANY_CHARACTER\nnot Palindrome");
		return 0;
	}
	else
	{
		for (int j = 0; j <= i; j++)
		{
			if ((i % 2 == 1) || ((i % 2 == 0) && (j != i / 2))) // (�բ����Ũӹǹ����� && i �繨ӹǹ���) || (�բ����Ũӹǹ�����) 
			{
				if (q[j] != *(q + i - j))
				{
					printf("\nnot Palindrome");
					return 0;
				}
			}
		}
	}

	printf("\nPalindrome");

	return 0;
}