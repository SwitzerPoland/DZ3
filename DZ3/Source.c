#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double pounds;
    double kg;
    double grams;
    double tons;
    printf("Введите фунты: ");
    scanf("%f", &pounds);
    kg = pounds * 0.4536;
    grams = kg * 1000.0;
    tons = kg / 1000.0;
    puts("_____________________________________________________\n");
    printf("| %10s | %10s | %10s | %10s |\n", "фунты", "кг", "граммы", "тонны");
    puts("-----------------------------------------------------\n");
    printf("| %10.2f | %10.2f | %10.2f | %10.5f |\n", pounds, kg, grams, tons);
    puts("_____________________________________________________");
    system("pause");
}
