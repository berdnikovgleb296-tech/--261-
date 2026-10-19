#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
    int n;
    double x;
    double sum = 0;

    setlocale(LC_ALL, "RUS");

    puts("¬ведите n (натуральное число):");
    scanf("%d", &n);

    puts("¬ведите x (действительное число):");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++)
    {
        sum += cos(pow(x, i));
    }

    printf("\n—умма: %.4lf\n", sum);
}