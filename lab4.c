#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

 
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    
    printf("=== Начальные значения ===\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n", d);

    
    printf("\n=== Ввод новых значений ===\n");

    printf("Введите символ: ");
    scanf(" %c", &c);

    printf("Введите целое число: ");
    scanf("%d", &i);

    printf("Введите вещественное число (float): ");
    scanf("%f", &f);

    printf("Введите вещественное число (double): ");
    scanf("%lf", &d);

    printf("\n=== Введенные значения ===\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n", d);

    // Задача 1а. Целая и дробная часть
    printf("\n=== Задача 1а ===\n");
    int int_part = (int)f;
    float frac_part = f - int_part;
    printf("Число: %f\n", f);
    printf("Целая часть: %d\n", int_part);
    printf("Дробная часть: %f\n", frac_part);

    // Задача 1б. Код символа
    printf("\n=== Задача 1б ===\n");
    printf("Символ: %c\n", c);
    printf("Десятичный код: %d\n", c);
    printf("Шестнадцатеричный код: %x\n", c);

    // Задача 1в. 1/i
    printf("\n=== Задача 1в ===\n");
    double result = 1.0 / i;
    printf("1/%d = %f\n", i, result);

    return 0;
}