#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int i = 0;
	int min = 0, a[25];
	int razm = 0;
t1: printf("Введите размер массива: ");
	scanf("%d", &razm);
	if (razm > 25)
	{
		printf("Ошибка\n");
		goto t1;
	}
	for (i = 0; i < razm; i++)
	{
		printf("Введите число %d: ", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < razm; i++)
	{
		printf("%d ", a[i]);
	}
	min = a[0];
	printf("\n");
	for (i = 0; i < razm; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	if (a[0] == 0)
	{
		a[0] = min;
	}
	if (a[razm] == 0)
	{
		a[razm] = min;
	}
	for (i = 1; i < razm - 1; i++)
	{
		if (a[i] == 0)
		{
			a[i] = fabs(a[i - 1] - a[i + 1]);
		}
		for (i = 0; i < razm; i++)
		{
			printf("%d ", a[i]);
		}
	}
}
