#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <clocale>

int main(void)
{
	setlocale(LC_ALL, "rus");
	double x, y;
B1:
	printf("Введите x\n");
	scanf("%lf", &x);
	printf("Введите y\n");
	scanf("%lf", &y);
	printf("x=%6.3lf; y=%6.3lf\n", x, y);
	if (((y >= -1 && (y <= 1) && (x <= 0) && (x * x + y * y <= 1)) or ((y >= -x / 2) && (y <= x / 2) && (x <= 2) && (x * x + y * y >= 1)))) {
		printf("Точка попадает в область\n");
	}
	else {
		printf("Точка не попадает в область\n");
	}
	goto B1;
	return 0;
	}
