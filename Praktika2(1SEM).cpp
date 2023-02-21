#include<stdio.h>
int main(void)
{
	char name1[9], name2[9], name3[9];
	char kolvo1, kolvo2, kolvo3;
	long zapas1, zapas2, zapas3;
	float chast1, chast2, chast3;
	printf("1. Vvedite: Firma, kol-vo, god. zapas, chast' rynka >");
	scanf("%s %c %d %f", name1, &kolvo1, &zapas1, &chast1);
	printf("2. Vvedite: Firma, kol-vo, god. zapas, chast' rynka >");
	scanf("%s %c %d %f", name2, &kolvo2, &zapas2, &chast2);
	printf("3. Vvedite: Firma, kol-vo, god. zapas, chast' rynka >");
	scanf("%s %c %d %f", name3, &kolvo3, &zapas3, &chast3);
	/* Вывод таблицы */
	/* Вывод заголовков */
	printf("--------------------------------------------------------------------------------------\n");
	printf("| Firmy - proizvoditelya SKBD                                                        |\n");
	printf("|------------------------------------------------------------------------------------|\n");
	printf("| Firma    | Kolichestvo produktov | Gododvoy objyom prodazhi ($) | Chast' rynka (%) |\n");
	printf("|----------|-----------------------|------------------------------|------------------|\n");
	/* Вывод рядов фактических данных */
	printf("| %9s| %c                     | %-3d                          | %5.1f           |\n", name1, kolvo1, zapas1, chast1);
	printf("| %9s| %c                     | %-3d                          | %5.1f           |\n", name2, kolvo2, zapas2, chast2);
	printf("| %9s| %c                     | %-3d                          | %5.1f           |\n", name3, kolvo3, zapas3, chast3);
	printf("| Primechanie: po dannym Gartner Group za 1999g                                      |\n");
	printf("--------------------------------------------------------------------------------------\n");
	return 0;
}
