#include <stdio.h>

int main() {
    int num1, num2;

    printf("Введите первое число: ");
    scanf("%d", &num1);

    printf("Введите второе число: ");
    scanf("%d", &num2);

    int result = num1 > num2 ? 1 : num1 == num2 ? 0 : -1;

    if (result == 1) {
        printf("Первое число больше второго.\n");
    } else if (result == 0) {
        printf("Числа равны.\n");
    } else {
        printf("Первое число меньше второго.\n");
    }

    return 0;
}

