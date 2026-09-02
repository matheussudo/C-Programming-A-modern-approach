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

int pascal(int n, int k){
    if (k == 0) {
        return 1;
    }
    if (k == n ) {
        return 1;
    }

    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

int tribonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }

}

void merge_sort(int t1, int c1[t1], int t2, int c2[t2], int t3, int c3[t3]) {
    int i = 0;
    int j = 0;
    int m = 0;

    int pilha_ordenada[6];
    for (int o = 0; 0 < 6; o++) {
        if (c1[i] > c2[j]){
            c3[m] =  c2[j];
            j++;
        } else {
            o++;
            c3[o] = c1[i];
        }
        
    }
}

1

int main() {
    limpar_console();
    int c1[3] = {2, 5, 9};
    int c2[3] = {1, 6, 8};
    int pilha_ordenada[6];

    printf("C1: ");
    imprimirArray(c1, 3);
    printf("C2: ");
    imprimirArray(c2, 3);

    merge_sort1(3, c1, 3, c2, 6, pilha_ordenada);

    printf("Pilha ordenada: ");
    imprimirArray(pilha_ordenada, 6);
}