#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)

{
    setlocale(LC_ALL, "Rus");
    double x, y, z;
    printf("Введите x, y, z: >");
    scanf("%lf %lf %lf", &x, &y, &z);
    float u = pow(8 + pow(fabs(x-y), 2) + 1, 1./3.)/(pow(x, 2) + pow(y, 2) + 2) - expf(fabs(x-y)) * pow((pow(tan(z), 2) + 1), x);
    printf("u = %lf", u);

}
