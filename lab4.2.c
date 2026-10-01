#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

   
    int a = 11;
    int b = 3;

   
    int x;
    float y;
    double z;

   
    x = a / b;
    y = a / b;
    z = a / b;

   
    printf("=== Неявное преобразование типов ===\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a / b = %d / %d = %d (целочисленное деление)\n\n", a, b, a / b);

    printf("x (int)    = a / b = %d\n", x);
    printf("y (float)  = a / b = %f\n", y);
    printf("z (double) = a / b = %lf\n\n", z);

    // Пояснение результатов
    printf("=== Пояснение ===\n");
    printf("a и b - целые числа, поэтому a/b выполняется как целочисленное деление.\n");
    printf("Результат 11/3 = 3 (дробная часть отбрасывается).\n");
    printf("При присваивании в float и double значение 3 просто преобразуется в 3.000000.\n");
    printf("Дробная часть 0.666... теряется ещё до присваивания!\n\n");

   
    printf("=== Явное преобразование типа ===\n");

    // Без скобок
    printf("(float)a / b  = %f\n", (float)a / b);
    printf("(double)a / b = %lf\n\n", (double)a / b);

    // Со скобками
    printf("(float)(a / b)  = %f\n", (float)(a / b));
    printf("(double)(a / b) = %lf\n\n", (double)(a / b));

    
    printf("=== Эксперименты со скобками ===\n");
    printf("a / (float)b  = %f\n", a / (float)b);
    printf("a / (double)b = %lf\n\n", a / (double)b);

    printf("(float)a / (float)b = %f\n", (float)a / (float)b);
    printf("(double)a / (double)b = %lf\n", (double)a / (double)b);

    return 0;
}