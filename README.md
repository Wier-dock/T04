# T04
Программы на C. по if , else if и for, while

# Первая задача
```c
## Добавляю библиотеку
#include <stdio.h>
## Показываю функцию и аргументы
int main() {
    int num1, num2;
## Ввод в консоль
    printf("Введите первое число: ");
    scanf("%d", &num1);
    printf("Введите второе число: ");
    scanf("%d", &num2);
## Использую функции
    if (num2 == 0) {
        printf("На ноль делить нельзя!\n");
    } else if (num1 % num2 == 0) {
        printf("Первое число делится на второе без остатка.\n");
    } else {
        printf("Первое число не делится на второе без остатка.\n");

    }


  return 0;

}
```
# Вторая задача
```c
## Добавляю библиотеку
#include <stdio.h>
## Показываю функцию и аргументы
int main() {
    int num1, num2;
## Ввод в консоль
    printf("Введите первое число: ");
    scanf("%d", &num1);
    printf("Введите второе число: ");
    scanf("%d", &num2);
## Использую функции
    if (num2 == 0) {
        printf("На ноль делить нельзя!\n");
    } else if (num1 % num2 == 0) {
        printf("Первое число делится на второе без остатка.\n");
    } else {
        printf("Первое число не делится на второе без остатка.\n");
    }
    return 0;

}
```
# Третяя задача
```c
## Добавляю библиотеку
#include <stdio.h>
## Показываю функцию и аргументы
int main() {
    int number;
## Ввод в консоль
    printf("Введите число от 1 до 100: ");
    scanf("%d", &number);
## Использую функции
    if (number >= 1 && number <= 100) {
        if (number == 50) {
            prntf("Число равно 50.\n");
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
```
# Четвёртая задача
```c
## Добавляю библиотеку
#include <stdio.h>
## Показываю функцию и аргументы
int main() {
    int num1, num2;
## Ввод в консоль    
    printf("Введите первое число: ");
    scanf("%d", &num1);
    printf("Введите второе число: ");
    scanf("%d", &num2);
## Тернантный оператор
    int result = num1 > num2 ? 1 : num1 == num2 ? 0 : -1;
## Использую функции
    if (result == 1) {
        printf("Первое число больше второго.\n");
    } else if (result == 0) {
        printf("Числа равны.\n");
    } else {
        printf("Первое число меньше второго.\n");
    }

    return 0;
}
```
# Циклы

# Пятая задача
```c
## Добавляю библиотеку
#include <stdio.h>
## Показываю функцию и аргументы
int main() {
    int limit;
## Ввод в консоль  
    printf("Введите предел: ");
    scanf("%d", &limit);
## Использую цикл
    for (int i = 1; i <= limit; i += 2) {
        printf("%d ", i);
    }
## Вывожу квадраты
    printf("\n");

    return 0;

}
```
# Шестая задача
```c
## Добавляю библиотеку
#include <stdio.h> 
## Показываю функцию и аргументы
int main() {
    char ch;
    int count = 0;
    printf("Вводите символы (для завершения введите точку): ");
## Использую цикл
    while ((ch = getchar()) != '.') {
        count++;
    }
## Вывожу количество символов 
    printf("Количество введенных символов: %d\n", count);
    return 0;
}
```
# Седьмая задач
```c
## Добавляю библиотеку
include <stdio.h>
## Показываю функцию и аргументы
int main() {
    int number = 0;
    int sum = 0;
    int count = 0;

    char answer;

## Использую цикл
    printf("Введите числа (для завершения введите 'y' или 'Y'): ");
    while (scanf("%d", & number) == 1) {
        sum += number;
        count++;
## Ввод в консоль
        printf("Продолжить ввод (y/Y)? ");
        scanf(" %c", &answer);
## Использую функции
        if (answer == 'y' || answer == 'Y') {
            continue;
        } else {
            break;
        }
    }
## Использую функции
    if (count > 0) {
        double average = (double)sum / count;
        printf("Сумма введенных чисел: %d\n", sum);
        printf("Среднее арифметическое: %.2f\n", average);
    } else {
        printf("Вы не ввели ни одного числа.\n");

    }

    return 0;
} 
```
