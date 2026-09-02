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

void inverterArray(int array[], int size) {
    int array_copy[size];te

    memcpy(array_copy, array, size * sizeof(int));

    int j = size - 1;

    for (int i = 0; i < size; i++) {
        array[i] = array_copy[j];
        j--;
    }
}   

void imprime_binario(int n) {

    if (n == 0) {
        return;
    } else {
        imprime_binario(n / 2);
        printf("%d", n % 2);
        return;
    }
} 

void imprime_reverso(int n) {
    // n = 1234
    if (n == 0) {
        return;
    } else {
        printf("%d", n % 10);
        imprime_reverso(n / 10);
    }
    
}

void reverter_array(int arr[], int tamanho) {
    if (tamanho < 0) {
        return;
    } else {
        printf(" %d", arr[tamanho - 1]);
        reverter_array(arr, tamanho - 1);
    }
}

void eco_recursivo (int n) {
    if (n == 0) {
        printf("\nBASE ATINGIDA !\n");
        return;
    } else {
        printf("\nDescendo: %d", n);
        eco_recursivo(n - 1);2
        printf("\nSubindo: %d", n);
    }
}

int pascal(int n, int k) {
    // Propriedades combinatórias do Triângulo de Pascal: 
    // 1C(n, k) = C(n-1, k-1) + C(n-1, k)$.

    if (n == 1 && k == 1) {
        return 1;
    }

    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

int main() {
    limpar_console();
    printf("\n%d", pascal(5, 3));
    printf("\n");
}
