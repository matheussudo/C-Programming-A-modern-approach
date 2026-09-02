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

void ordenar(int t1, int c1[t1], int t2, int c2[t2], int t3, int c3[t3]) {
    int i = 0;
    int j = 0;
    int p = 0;
    int pilha_ordenada[6];
    while (i < 3 && j < 3) {
        if (c1[i] > c2[j]){
            c3[p] =  c2[j];
            printf("\nP[%d] = %d \ti - %d \tj - %d", p, c3[p], i, j);
            p++;
            j++;
        } else {
            c3[p] = c1[i];
            printf("\nP[%d] = %d \ti - %d \tj - %d", p, c3[p], i, j);
            p++;
            i++;
        }
    }
    while (i < 3) {
        c3[p++] = c1[i++];
    }
    while (j < 3) {
        c3[p++] = c2[j++];
    }
}

void intercalar(int arr[], int inicio, int meio, int fim) {
    int tam_esq = meio - inicio + 1;
    int tam_dir = fim - meio;

    int esq[tam_esq];
    int dir[tam_dir];

    for (int i = 0; i < tam_esq; i++) {
        esq[i] = arr[inicio + i];
    }

    for (int j = 0; j < tam_dir; j++) {
        dir[j] = arr[meio + 1 + j]; 
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    while (i < tam_esq && j < tam_dir) {
        if (esq[i] > dir[j]){
            arr[k++] =  dir[j++];
        } else {
            arr[k++] = esq[i++];
        }
    }

    while (i < tam_esq) {
        arr[k++] = esq[i++];
    }
    while (j < tam_dir) {
        arr[k++] = dir[j++];
    }
}

void merge_sort(int arr[], int inicio, int fim) {
    if (inicio == fim) {
        return
    }


    if (inicio < fim) {
        meio = inicio + (fim - inicio) / 2;
    }
}

merge_sort(arr, inicio, fim)
 └── if (inicio < fim)
      ├── 1. Calcula meio
      ├── 2. merge_sort(arr, inicio, meio)      <-- Divide esquerda
      ├── 3. merge_sort(arr, meio + 1, fim)      <-- Divide direita
      └── 4. intercalar(arr, inicio, meio, fim)  <-- Junta tudo ordenado1


int main() {
    limpar_console();
    int arr[6] = {1, 4, 5, 6, 7, 8};
    imprimirArray(arr, 6);
}