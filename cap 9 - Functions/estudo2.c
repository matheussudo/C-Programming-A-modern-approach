// Estudos sobre Tree Recursion

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

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
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
    printf("Consult Pascal Row: ");
    int n, k;
    scanf("%d", &n);
    printf("Consult Pascal Column: ");
    scanf("%d", &k);
    printf("\n%d", pascal(n,k));
}