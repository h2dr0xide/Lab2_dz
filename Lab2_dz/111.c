#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    double x, a;

    printf("Введите оплату за час: ");
    scanf_s("%lf", &x);

    printf("Введите количество часов (> 38): ");
    scanf_s("%lf", &a);

    double result = 38 * x + (a - 38) * x * 1.5;

    printf("Зарплата: %.2lf руб.", result);

}
