#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void limpar_console() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// PROGRAM PROJECT 01 ---------------------------------------------

void selection_sort(int arr[], int n) {

    if (n == 1) {
        return;
    }

    int maior = arr[0];
    int p = 0;

    for (int i = 0; i < n; i++) {
        if (maior < arr[i]) {
            maior = arr[i];
            p = i;
        }
    }

    int x = arr[n - 1];
    arr[n - 1] = maior;
    arr[p] = x;

    return selection_sort(arr, n - 1);
}

void program_project01() {
    printf("\n");

    int arr[10]; // de 0 a 9 
    
    for (int i = 0; i <= 9; i++) {
        printf("Digite o numero %d: ", (i + 1));
        scanf("%d", &arr[i]);     
    }

    printf("Array Digitado: ");
    imprimirArray(arr, 10);

    printf("Array Ordenado: ");
    selection_sort(arr, 10);
    imprimirArray(arr, 10);
}

int main(void) {
    limpar_console();
    program_project01();
}