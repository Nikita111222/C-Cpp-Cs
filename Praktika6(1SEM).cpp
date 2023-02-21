#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int main()
{
const int size = 10;
int a;
int i = 0;
int min = 0;
printf("input size of the array(5-20)");
scanf_s("%d", &size);
while (size < 5 || size>20) {
printf("Error. Input size of array again");
scanf_s("%d", &size);
}
int array[20];
for (int i = 0; i < size; i++) {
printf("input element of array(-100 - 100)");
scanf_s("%d", &a);
while (a < -100 || a>100) {
printf("Error. Input element of array again");
scanf_s("%d", &a);
}
for (i; i < size; ++i)
if (min > array[i] && array[i] > 0)
min = array[i];
for (i = 0; i < size; ++i)
{
if (array[i] < 0)
array[i] = min;
}
}
printf("amount of pairs -> %d\n", array[i]);
return 0;
}
