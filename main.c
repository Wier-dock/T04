#include <stdio.h>


int main() {
    int num1, num2;

    printf("Введите первое число: ");
    scanf("%d", &num1);

    printf("Введите второе число: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("На ноль делить нельзя!\n");
    } else if (num1 % num2 == 0) {
        printf("Первое число делится на второе без остатка.\n");
    } else {
        printf("Первое число не делится на второе без остатка.\n");
    }

    return 0;
}