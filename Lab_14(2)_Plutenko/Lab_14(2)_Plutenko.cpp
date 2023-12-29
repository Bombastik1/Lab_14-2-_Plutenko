#include <stdio.h>
#include <limits.h>
#include <locale> 
int main() {
    setlocale(LC_ALL, "");
    int n;
    int i;

    printf("Введiть кiлькiсть елементiв масиву: ");
    scanf_s("%d", &n);

    int* array = (int*)malloc(n * sizeof(int));
    printf("Введiть елементи масиву:\n");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    int* x = array;
    int y;
    y = 0;

    for (i = 0; i < n; i++) {
        *x = array[i];
        y += *x;
    }

    float f;
    f = (float)y / n;
    printf("Середнє значення: %f \n", f);

    return 0;
}