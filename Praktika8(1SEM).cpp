#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#define p1 printf("input size of the array(5-20)")
#define scnf1 scanf_s("%d", &size)
#define пока1 while (size < 5 || size>20)
#define p2 printf("Error. Input size of array again")
#define scnf2 scanf_s("%d", &size)
#define для1 for (int i = 0; i < size; i++)
#define p3 printf("input element of array(-100 - 100)")
#define scnf3 scanf_s("%d", &a)
#define пока2 while (a < -100 || a>100)
#define p4 printf("Error. Input element of array again")
#define scnf4 scanf_s("%d", &a)
#define для2 for (i; i < size; ++i)
#define если1 if (min > array[i] && array[i] > 0)
#define для3 for (i = 0; i < size; ++i)
#define если2 if (array[i] < 0)
#define p5 printf("amount of pairs -> %d\n", array[i])
#define мин1 min = array[i];
#define а array[i] = min;

int main()
{
	const int size = 10;
	int a;
	int i = 0;
	int min = 0;
	p1;
		scnf1;
	пока1{
		p2;
		scnf2;
	}
	int array[20];
	для1{
		p3;
		scnf3;
	пока2{
		p4;
		scnf4;
	}
		для2
		если1
		мин1
		для3
		{
			если2;
			а;
		}
	}	
p5;
}
