#include<stdio.h>
int main()
{
	int a = 10, b = 20, c = 30, * p1, * p2;
	p1 = &c;
	p2 = &a;
	printf("%d %d %d %d %d\n", a, b, c, *p1, *p2);
	a = 100;
	printf("%d %d %d %d %d\n", a, b, c, *p1, *p2);
	

	return 0;
}
