#include <stdio.h>

int main() {
    int number;

    printf("Введите число от 1 до 100: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 100) {
        if (number == 50) {
            printf("Число равно 50.\n");
        } else if (number > 50) {
            printf("Число больше 50.\n");
        } else {
            printf("Число меньше 50.\n");
        }
    } else {
        printf("Вы ввели неверное число. Число должно быть от 1 до 100.\n");
    }

    return 0;
}
