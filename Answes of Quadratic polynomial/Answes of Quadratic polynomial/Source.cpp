#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	float a[3], x[2], s, t;

	printf("Ax^2 + Bx + C = 0\n");
	printf("Your A is : ");
	scanf("%f", &a[0]);
	printf("Your B is : ");
	scanf("%f", &a[1]);
	printf("Your C is : ");
	scanf("%f", &a[2]);

	if (a[0] == 0)
	{
		printf("\nx = %f", -a[2] / a[1]);
		printf("\n\nThe solution is :\n(%.3f)x + (%.3f) = 0", a[1],a[2]);
		printf("\nx = %.3f/%.3f", -a[2], a[1]);
		printf("\n\nSo, we get that x = %f\n", -a[2] / a[1]);
		return 0;
	}
	else
	{
		t = pow(a[1], 2) - 4 * a[0] * a[2];
		if (t < 0) 
		{
			printf("\n\nThe formular to find the answer of Ax^2 + Bx + C = 0 is\nx = [-B +- sqrt(B^2 - 4AC)] / [2A]");
			printf("\nThe answer X is undefined because :\n\nB^2 - 4AC < 0   or   equal to %lf\n" , t);
			return 0;
		}
		s = sqrt(t);
		x[0] = (-a[1] + s) / (2 * a[0]);
		x[1] = (-a[1] - s) / (2 * a[0]);

		if (x[0] == x[1] && t == 0)
		{
			//printf("\n%.3f\n", s);//
			printf("The answer X is : %f", x[0]);
			printf("\n\nThe solution is :");
			printf("\n\nThe formular to find the answer of Ax^2 + Bx + C = 0 is\nx = [-B +- sqrt(B^2 - 4AC)] / [2A]");
			printf("\n\nSo, we get that \nx = [-%.3f +- sqrt((%.3f)^2 - 4(%.3f)(%.3f))] / 2(%.3f)",a[1],a[1],a[0],a[2],a[0]);
			printf("\nx = [-%.3f +- sqrt((%.3f)^2 - %.3f)] / %.3f", a[1], a[1], 4*a[0]*a[2], 2*a[0]);
			printf("\nx = [-%.3f +- sqrt((%.3f))] / %.3f", a[1], t, 2 * a[0]);
			printf("\nx = %.3f/%.3f", -a[1], 2 * a[0]);
			printf("\tor\tx = %f", x[1]);// x[0]
		}
		else if ((x[0] == x[1] && t != 0) || (x[0] != x[1] && t == 0))
		{
			printf("Unknown ERROR !!!");
			return 0;
		}
		else
		{
			//printf("\n%.3f\n", s);//
			printf("The answer x are : %f  and  %f", x[0],x[1]);
			printf("\n\nThe solution is :");
			printf("The formular to find the answer of Ax^2 + Bx + C = 0 is\nx = [-B +- sqrt(B^2 - 4AC)] / [2A]");
			printf("\nSo, we get that \nx = [-%.3f +- sqrt((%.3f)^2 - 4(%.3f)(%.3f))] / 2(%.3f)", a[1], a[1], a[0], a[2], a[0]);
			printf("\nx = [-%.3f +- sqrt((%.3f)^2 - %.3f)] / %.3f", a[1], a[1], 4 * a[0] * a[2], 2 * a[0]);
			printf("\nx = [-%.3f +- sqrt((%.3f))] / %.3f", a[1], t, 2 * a[0]);

			printf("\n\nThe value of B^2 - 4AC > 0 so, we will get two answer of x\n");
			printf("\nThe first one is :\n");
			printf("\nx1 = [-%.3f + %.3f] / %.3f", a[1], s, 2 * a[0]);
			printf("\nx1 = %.3f/%.3f", -a[1] + s, 2 * a[0]);
			printf("\nSo, we got the first Value of x is x1 = %f", x[0]);

			printf("\n\nThe second one is :\n");
			printf("\nx2 = [-%.3f - %.3f] / %.3f", a[1], s, 2 * a[0]);
			printf("\nx2 = %.3f/%.3f", -a[1] - s, 2 * a[0]);
			printf("\nSo, we got the second Value of x is x2 = %f\n", x[1]);
		}
	}
	return 0;
}