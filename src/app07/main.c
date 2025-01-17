include <stdio.h>

int main() {
    int number = 0;	
    int sum = 0;
    int count = 0;
    char answer;

    printf("Введите числа (для завершения введите 'y' или 'Y'): ");
    while (scanf("%d", & number) == 1) {
        sum += number;
        count++;

        printf("Продолжить ввод (y/Y)? ");
        scanf(" %c", &answer);
        if (answer == 'y' || answer == 'Y') {
            continue;
        } else {
            break;
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Сумма введенных чисел: %d\n", sum);
        printf("Среднее арифметическое: %.2f\n", average);
    } else {
        printf("Вы не ввели ни одного числа.\n");
    }

    return 0;
} 

