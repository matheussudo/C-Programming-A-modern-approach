#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
void split(int a[], int low, int high);

int main(void) {
    int a[N], i;

    printf("Enter 10 numbers to be sorted: ");
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
}

void quicksort(int a[], int low, int high) {
    int middle;
    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[]) // fazer depois 