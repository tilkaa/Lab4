#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int n;

    printf("Введите трехзначное число: ");
    scanf("%d", &n);

    int last = n % 10;          // последняя цифра
    int first = n / 100;        // первая цифра
    int middle = (n / 10) % 10; // средняя цифра
    int sum = first + middle + last;
    int reversed = last * 100 + middle * 10 + first;

    printf("Последняя цифра %d, первая - %d, сумма цифр %d, число наоборот %d\n",
        last, first, sum, reversed);

    return 0;
}