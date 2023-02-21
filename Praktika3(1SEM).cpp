#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale (LC_ALL, "Rus");
	char name1[9], name2[9], name3[9];
	char kolvo1, kolvo2, kolvo3;
	long long zapas1, zapas2, zapas3;
	float chast1, chast2, chast3;
	printf("1. Введите: Фирма, кол-во, год. запас, часть рынка >");
	scanf("%s %c %lld %f", name1, &kolvo1, &zapas1, &chast1);
	printf("2. Введите: Фирма, кол-во, год. запас, часть рынка >");
	scanf("%s %c %lld %f", name2, &kolvo2, &zapas2, &chast2);
	printf("3. Введите: Фирма, кол-во, год. запас, часть рынка >");
	scanf("%s %c %lld %f", name3, &kolvo3, &zapas3, &chast3);
	/* Вывод таблицы */
	/* Вывод заголовков */
	printf("--------------------------------------------------------------------------------------\n");
	printf("| Фирмы - производителя СКБД                                                         |\n");
	printf("|------------------------------------------------------------------------------------|\n");
	printf("| Фирма    | Количество продуктов  | Годовой объем продажи ($)   | Часть рынка (%)   |\n");
	printf("|----------|-----------------------|------------------------------|------------------|\n");
	/* Вывод рядов фактических данных */
	printf("| %9s| %c                     | %11lld                  | %5.1f            |\n", name1, kolvo1, zapas1, chast1);
	printf("| %9s| %c                     | %11lld                  | %5.1f            |\n", name2, kolvo2, zapas2, chast2);
	printf("| %9s| %c                     | %11lld                  | %5.1f            |\n", name3, kolvo3, zapas3, chast3);
	printf("--------------------------------------------------------------------------------------\n");
	printf("| Примечание: по данным Gartner Group za 1999g                                       |\n");
	printf("--------------------------------------------------------------------------------------\n");
	return 0;
}
