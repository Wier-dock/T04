# T04
Программы на C. по if , else if и for, while

# 1

## Добавляю библиотеку
```bash
#include <stdio.h>
```
## Показываю функцию и аргументы
```bash
int main() {
```
```bash
    int num1, num2;
```
## Ввод в консоль
```bash
    printf("Введите первое число: ");
```
```bash
    scanf("%d", &num1);
```
```bash
    printf("Введите второе число: ");
```
```bash
    scanf("%d", &num2);
```
## Использую функции
```bash
    if (num2 == 0) {
        printf("На ноль делить нельзя!\n");
```
```bash
    } else if (num1 % num2 == 0) {
        printf("Первое число делится на второе без остатка.\n");
```
```bash
    } else {
        printf("Первое число не делится на второе без остатка.\n");

    }
```

  return 0;

}

# 2
## Добавляю библиотеку
```bash
#include <stdio.h>
```

## Показываю функцию и аргументы
```bash
int main() {
```
```bash
    int num1, num2;
```
## Ввод в консоль
```bash
    printf("Введите первое число: ");
    scanf("%d", &num1);
```
```bash
    printf("Введите второе число: ");
    scanf("%d", &num2);
```
## Использую функции
```bash
    if (num2 == 0) {
        printf("На ноль делить нельзя!\n");
```
```bash
    } else if (num1 % num2 == 0) {
        printf("Первое число делится на второе без остатка.\n");
```
```bash
    } else {
        printf("Первое число не делится на второе без остатка.\n");
    }
```
    return 0;

}


# 3

## Добавляю библиотеку
```bash
#include <stdio.h>
```
## Показываю функцию и аргументы
```bash
int main() {
```
```bash
    int number;
```
## Ввод в консоль
```bash
    printf("Введите число от 1 до 100: ");
    scanf("%d", &number);
```
## Использую функции
```bash
    if (number >= 1 && number <= 100) {
```
```bash
        if (number == 50) {
            printf("Число равно 50.\n");
```
```bash
        } else if (number > 50) {
            printf("Число больше 50.\n");
```
```bash
        } else {
            printf("Число меньше 50.\n");
```
     }
```bsah
    } else {
        printf("Вы ввели неверное число. Число должно быть от 1 до 100.\n");
    }
```
    return 0;

}

# 4

## Добавляю библиотеку
```bsah
#include <stdio.h>
```
## Показываю функцию и аргументы
```bsah
int main() {
```
```bsah
    int num1, num2;
```
## Ввод в консоль    
```bsah
    printf("Введите первое число: ");
    scanf("%d", &num1);
```
```bsah
    printf("Введите второе число: ");
    scanf("%d", &num2);
```
## Тернантный оператор
```bsah
    int result = num1 > num2 ? 1 : num1 == num2 ? 0 : -1;
```
## Использую функции
```bash
    if (result == 1) {
        printf("Первое число больше второго.\n");
```
```bsah
    } else if (result == 0) {
        printf("Числа равны.\n");
```
```bsah
    } else {
        printf("Первое число меньше второго.\n");
    }
```
    return 0;
}

# Циклы

# 5

## Добавляю библиотеку
```bash
#include <stdio.h>
```
## Показываю функцию и аргументы
```bash
int main() {
    int limit;
```
## Ввод в консоль  
```bash
    printf("Введите предел: ");
    scanf("%d", &limit);
```
## Использую цикл
```bash
    for (int i = 1; i <= limit; i += 2) {
        printf("%d ", i);
    }
```
## Вывожу квадраты
```bash
    printf("\n");
```
    return 0;

}

# 6
## Добавляю библиотеку
```bash
#include <stdio.h> 
```
## Показываю функцию и аргументы
```bash
int main() {
    char ch;
    int count = 0;
```
```bash
    printf("Вводите символы (для завершения введите точку): ");
```
## Использую цикл
```bash
    while ((ch = getchar()) != '.') {
        count++;
    }
```
## Вывожу количество символов 
```bash
    printf("Количество введенных символов: %d\n", count);
```
    return 0;
}

# 7
## Добавляю библиотеку
```bash
include <stdio.h>
```
## Показываю функцию и аргументы
```bash
int main() {
```
```bash
    int number = 0;
```
```bash	
    int sum = 0;
```
```bash
    int count = 0;
```
```bash
    char answer;
```
## Использую цикл
```bash
    printf("Введите числа (для завершения введите 'y' или 'Y'): ");
```
```bash
    while (scanf("%d", & number) == 1) {
```
```bash
        sum += number;
```
```bash
        count++;
```
## Ввод в консоль
```bash
        printf("Продолжить ввод (y/Y)? ");
        scanf(" %c", &answer);
```
## Использую функции
```bash
        if (answer == 'y' || answer == 'Y') {
```
```bash
            continue;
```
```bash
        } else {
```
```bash
            break;
```
        }
    }
## Использую функции
```bash
    if (count > 0) {
        double average = (double)sum / count;
```
```bash
        printf("Сумма введенных чисел: %d\n", sum);
        printf("Среднее арифметическое: %.2f\n", average);
```
```bash
    } else {
        printf("Вы не ввели ни одного числа.\n");
```
    }

    return 0;
} 
