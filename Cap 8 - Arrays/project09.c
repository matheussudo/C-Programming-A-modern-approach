#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>


void imprimirCampo(char array[][10], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}

void limpar_console() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int get_random() { // Gerar numeros aleatórios
    int x = rand() % 3;
    return x;
}

void get_position(int position[2]) {
    position[0] = get_random(); // x
    position[1] = get_random(); // y
}

void get_round(int position[2], int round_x[2], int round_y[2]) {
    round_x[0] = position[0] - 1; //esquerda
    round_x[1] = position[0] + 1; //direita
    round_y[0] = position[1] - 1; //cima
    round_y[1] = position[1] + 1; //baixo
}

void check_position(int position[2], int round_x[2], int round_y[2], char campo[][10], int tamanho) {
    bool sides[4] = {false, false, false, false};
    int lado;
    
    if (round_y[0] > 0 && campo[position[0]][round_y[0]] == '.') { // conferindo cima
        sides[0] = true;
    }
    if (round_y[1] < 10 && round_y[1] > 0 && campo[position[0]][round_y[1]] == '.') { // conferindo baixo
        sides[1] = true;
    }
    if (round_x[0] > 0 && campo[round_x[0]][position[1]] == '.') { // conferindo esquerda
        sides[2] = true;
    }
    if (round_x[1] < 10 && round_x[1] > 0 && campo[round_x[1]][position[1]] == '.') { // conferindo direita
        sides[3] = true;
    }
    
    if (!sides[0] && !sides[1] && !sides[2] && !sides[3]) {
        printf("\nNenhum lado valido encontrado! Caminhante encurralado.\n");
        return; 
    }
    
    do {
        lado = rand() % 4;
    } while (sides[lado] == false);
    
    if(lado == 0) {
        printf("\nSaiu Cima\n");
        position[1] = round_y[0];
    }
    if(lado == 1) {
        printf("\nSaiu Baixo\n");
        position[1] = round_y[1];
    }
    if(lado == 2) {
        printf("\nSaiu Esquerda\n");
        position[0] = round_x[0];
    }
    if(lado == 3) {
        printf("\nSaiu Direita\n");
        position[0] = round_x[1];
    }
    
}

int main() {
    limpar_console();
    srand((unsigned int) time(NULL));


    
    char campo[10][10];
    memset(campo, '.', sizeof(campo));
    
    char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int position[2] = {0}, exec;
    int round_x[2] = {0}, round_y[2] = {0};
    
    printf("\n-- Campo Inicial --\n");
    imprimirCampo(campo, 10);


    printf("\n-- Execução inicial --\n");
    position[0] = 0;
    position[1] = 0;
    campo[position[0]][position[1]] = alfabeto[0];
    get_round(position, round_x, round_y);
    printf("Posição x: %d\nPosição y: %d\n", position[0],position[1]); 
    printf("Cima: %d | Baixo: %d | Esquerda: %d | Direita: %d\n", round_y[0], round_y[1], round_x[0], round_x[1]);
    imprimirCampo(campo, 10);

    check_position(position, round_x, round_y, campo, 10);


    
    for (exec = 1; exec < 26; exec++) {
        int passo = exec + 1;
        printf("\nExecução: %d\n", passo);

        char objeto = alfabeto[exec];
        campo[position[0]][position[1]] = objeto;

        get_round(position, round_x, round_y);
        check_position(position, round_x, round_y, campo, 10);    
        imprimirCampo(campo, 10);
    }
    

    return 0;
}