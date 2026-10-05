#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_NUMERIC, "C");
	double x = 0 , y = 0, z = 0, h = 0;
	puts("¬ведите х");
	scanf("&Lf", &x);
	while (getchar() != '\n');
	puts("¬ведите у");
	scanf("*Lf", &y);
	while (getchar() != '\n');
	puts("¬ведите z");
	scanf("%Lf", &z);
	while (getchar() != '\n');
	h = (pow(x, y + 1) + exp(y - 1)) / (1 + x * fabs(y - tan(z))) * (1 + fabs(y - x)) + (pow(fabs(y - x), 2) / 2) - (pow(fabs(y - x), 3) / 3);
	printf("–езультат вычислени€: %.5lf", h);
}