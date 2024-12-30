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
