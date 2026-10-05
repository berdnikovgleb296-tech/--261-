#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


void main() {
    setlocale(LC_ALL, "RUS");
    int A, B, result;

    puts("Какую кнопку нажал первый игрок (A)?");
    scanf("%d", &A);

    puts("Какую кнопку нажал второй игрок (B)?");
    scanf("%d", &B);

    // Условие "ровно один четный" реализуется через XOR (исключающее ИЛИ)
    result = ((A % 2 == 0) ^ (B % 2 == 0));

    printf("Результат телевикторины (1 - победа, 0 - поражение): %d", result);
}