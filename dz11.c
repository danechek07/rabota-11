#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

#define MAX_N 100

int main() {
    int n, arr[MAX_N];
    int sum = 0, count = 0;
    double avg;
    int i;

    setlocale(LC_ALL, "RUS");

    printf("Введите размер массива n: ");
    scanf("%d", &n);

    printf("Введите %d элементов:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i += 2) { // i = 1, 3, 5, ...
        sum += (arr[i] > 0) * arr[i];           // Если положительный — добавляем в сумму
        count += (arr[i] > 0);                  // Увеличиваем счётчик только если > 0
    }

    if (count > 0) {
        avg = (double)sum / count;
        printf("Среднее значение положительных элементов на нечётных индексах: %.3f\n", avg);
    }
    else {
        printf("Нет положительных элементов на нечётных индексах.\n");
    }

    return 0;
}