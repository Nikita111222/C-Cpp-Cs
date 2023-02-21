#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	char str[10];
	int binary = 1;
	int octal = 1;
	int decimal = 1;
	int hexadecimal = 1;
	int word = 1;
	int d;
	printf("\nВведите строку (<10символов )=");
	gets_s(str, 10);
	printf("%s", str);
	d = strlen(str);
	for (int i = 0; i < d; i++)
	{
		if (str[i] < '0' || str[i]>'1')
			binary = 0;
	}
	if (binary == 1)
		printf("\nМожет быть двоичным");

	for (int i = 0; i < d; i++)
	{
		if (str[i] < '0' || str[i]>'7')
			octal = 0;
	}
	if (octal == 1)
		printf("\nМожет быть восьмиричным ");
	

	for (int i = 0; i < d; i++)
	{
		if (str[i] < '0' || str[i]>'9')
			decimal = 0;
	}
	if (decimal == 1)
		printf("\nМожет быть десятичным");
	for (int i = 0; i < d; i++)
	{
		if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A') || (str[i] > 'F' && str[i] < 'a') || (str[i] > 'f'))
			hexadecimal = 0;
	}
	if (hexadecimal == 1)
		printf("\nМожет быть шестнадцатеричным");
	for (int i = 0; i < d; i++)
	{
		if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			word = 0;
	}
	if (word == 1)
		printf("\nМожет быть слово");
	return 0;
}
