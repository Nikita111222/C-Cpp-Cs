//1 вариант
//Дан двумерный массив, размером(n⋅на⋅m).Создать и заполнить одномерный массив суммами
//положительных элементов в каждом столбце матрицы.В случае отсутствия положительных
//элементов в столбце заполнить его данными из любого соседнего столбца, при отсутствии в
//соседнем соответствующей информации, выдать сообщение об ошибке.Найти в полученном
//одномерном массиве максимальное значение, а также определить элементы одномерного, массива,
//позиции которых превышают позицию максимального элемента

#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    int n, m, t;
    int mat[10][10];
a1: printf("Введите количество строк двумерного массива: ");
    scanf("%d", &n);
    printf("Введите количество столбцов двумерного массива: ");
    scanf("%d", &m);
    int sum = 0;
    if (m < 10 || n < 1)
    {
        printf("Ошибка ввода размера массива\n");
        goto a1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Введите элементы массива -> ");
            scanf_s("%d", &t);
            mat[i][j] = t;
        }
    }