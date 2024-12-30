#include<stdio.h>



int main() {
    int num1, num2;

    printf("Введите первое число: ");
    scanf("%d", &num1);

    printf("Введите второе число: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Два числа равны.\n");
    } else {
        printf("Два числа не равны.\n");
    }

    return 0;
}
