#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
	char K;
	double x, y, z, a1, a2, a3;
	double u;
	scanf("%c", &K, 1);


	switch(K)
	{
	case '1':case '2':
		scanf("%lf %lf %lf", &x, &y, &z);
		a1 = pow(8 + pow(fabs(x - y), 2) + 1, 1./3.);
		a2 = (pow(x, 2) + pow(y, 2) + 2);
		a3 = exp(fabs(x - y)) * pow((pow(tan(z), 2) + 1), x);
		if (a2 == 0) {
			printf("ERROR - UNREAL\n");
		}
		u = (a1/a2) - a3;
		printf("u = %lf", u);
		break;
	case '3':
		x = -4.5; y = 0.000075; z = 84.5;
		u = pow(8 + pow(fabs(x - y), 2) + 1, 1./3.)/(pow(x, 2) + pow(y, 2) + 2) - exp(fabs(x - y))*pow((pow(tan(z), 2) + 1), x);
		printf("u = %lf", u);
		break;
	case '4':case'5':case'6':
		return 0;
	default:
		printf("ERROR - 404");
		return -44444;
	}
}
