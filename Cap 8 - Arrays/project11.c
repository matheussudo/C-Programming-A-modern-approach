#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

void limpar_console() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

bool check_state(char letra, char array[], int size) {
    bool state = false;
    for (int i = 0; i < 3; i++) {
        if (array[i] == letra) {
            state = true;
        }
    }
    return state;
}

int buscaBinaria(char vetor[], int tamanho, char alvo) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == alvo) {
            return meio;
        }

        if (vetor[meio] > alvo) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
        
    }

    return -1;
}


int main() {
    
    limpar_console();
    char letter[100], two[3] = {'A', 'B', 'C'}, tree[3] = {'D', 'E', 'F'}, four[3] = {'G', 'H', 'I'}, five[3] = {'J', 'K', 'L'}, six[3] = {'M', 'N', 'O'}, seven[3] = {'P', 'R', 'S'}, eight[3] = {'T', 'U', 'V'}, nine[3] = {'W', 'X', 'Y'};
    int digits[100];
    char alfabeto[26] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    
    printf("Enter a number: ");
    scanf("%99s", &letter); // matheus
    

    int resultado = buscaBinaria(alfabeto, 26, letter[1]);
    printf("\nPosição da letra no array: %d", resultado);

    if (check_state(alfabeto[resultado], two, 3)) {
        printf("\bTrue");
    } else {
        printf("\nFalse");
    }

    return 0;
}