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
	int k = 0;
	int t = 0;

	while (*p != '\0')
	{
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			printf("%c", *p);
			b[i] = *p;
			i++;
		}
		if (*p >= '0' && *p <= '9')
		{
			t++;
		}
		p++;
		k++; // the number of loop
	}

	if (k == t) // จำนวนตัวเลขเท่ากับจำนวนอินพุดทั้งหมด แสดงว่า input ที่รับมาทั้งหมดเป็นตัวเลข
	{
		printf("\nnot Palindrome");
		return 0;
	}
	
	char* q = b;

	if (i >= 1)
	{
		--i;//i บวกท้ายลูปสุดท้าย เลขเลยเกินมา 1
	}
	
	for (int j = 0; j <= i; j++)
	{
		if (q[j] != *(q + i - j))
		{
			printf("\nnot Palindrome");
			return 0;
		}
	}
	printf("\nPalindrome");
	return 0;
}