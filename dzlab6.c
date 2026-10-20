#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int check(double x, double y);
int main() 
{
	setlocale(LC_ALL, "RUS");
	float x, y;
	printf("Введите координату x: ");
	scanf("%f", &x);
	printf("Введите координату y: ");
	scanf("%f", &y);

	if (check(x, y) == 1)
		printf("Точка (%.2f, %.2f) принадлежит области.\n", x, y);
	else
		printf("Точка (%.2f, %.2f) не принадлежит области.\n", x, y);

	return 0;
	}
	
int check(float x, float y)
{
	float r_squared;
	r_squared = x * x + y * y;
	if (r_squared >= 1 && r_squared <= 9)
		return 1;
	else
		return 0;
}
