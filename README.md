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
```
    }


  return 0;
}

# 2


