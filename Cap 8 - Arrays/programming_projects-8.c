#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void limpar_console() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void project_01() {
    limpar_console();
    bool digit_seen[10] = {false};
    bool repeated[10] = {false};
    
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    printf("\nRepeated digits: ");

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            if (!repeated[digit]) {
                printf("%d ", digit);
                repeated[digit] = true;
            }
        } else {
            digit_seen[digit] = true;
        }
    }
}

void project_02() {
    limpar_console();

    bool digit_seen[10] = {false};
    int ocurrences[10] = {0};
    int numebers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int digit, l, c;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        ocurrences[digit] += 1;
        n /= 10;
    }

    printf("\nDigit: \t");
    imprimirArray(numebers, 10);
    printf("Ocurrences: \t");
    imprimirArray(ocurrences, 10);


}

void project_03() {

    char continuar;
    do {
        bool digit_seen[10] = {false};
        int digit;
        long n;

        limpar_console();

        printf("Enter a number: ");
        scanf("%ld", &n);

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0) {
            printf("Repeated digit\n");
        }
        else {
            printf("No repeated digit\n");
        }

        printf("Do you want run again? [y][n]");
        scanf(" %c", &continuar);
        
    } while (continuar != 'n' && continuar != 'N');
    
}

void project_06() {

    limpar_console();
    char frase[50]; 
    char nums[6] = {'4', '8', '3', '1', '0', '5'};
    int i;

    printf("\nDigite uma frase:");
    scanf("%99[^\n]", frase);

    for (i = 0; i < 51; i++) {
        
        if (frase[i] == '\n') {
            break;
        }

        frase[i] = toupper(frase[i]);
        
        if (frase[i] == 'A' || frase[i] == 'a') {
            frase[i] = nums[0];
        }
        if (frase[i] == 'B' || frase[i] == 'b') {
            frase[i] = nums[1];
        }
        if (frase[i] == 'E' || frase[i] == 'e') {
            frase[i] = nums[2];
        }
        if (frase[i] == 'I' || frase[i] == 'i') {
            frase[i] = nums[3];
        }
        if (frase[i] == 'O' || frase[i] == 'o') {
            frase[i] = nums[4];
        }
        if (frase[i] == 'S' || frase[i] == 's') {
            frase[i] = nums[5];
        }
    }

    for (int x = 0; x < 51; x++) {
        printf("%c", frase[x]);
    }
}

void project_07() {
    limpar_console();

    int cube[5][5] = {0};
    int row_totals[5] = {0}, column_total[5] = {0}, i, j;

    /*
    printf("Enter the row 1: ");
    scanf("%d %d %d %d %d", &cube[0][0], &cube[0][1], &cube[0][2], &cube[0][3], &cube[0][4]);
    printf("Enter the row 2: ");
    scanf("%d %d %d %d %d", &cube[1][0], &cube[1][1], &cube[1][2], &cube[1][3], &cube[1][4]);
    printf("Enter the row 3: ");
    scanf("%d %d %d %d %d", &cube[2][0], &cube[2][1], &cube[2][2], &cube[2][3], &cube[2][4]);
    printf("Enter the row 4: ");
    scanf("%d %d %d %d %d", &cube[3][0], &cube[3][1], &cube[3][2], &cube[3][3], &cube[3][4]);
    printf("Enter the row 5: ");
    scanf("%d %d %d %d %d", &cube[4][0], &cube[4][1], &cube[4][2], &cube[4][3], &cube[4][4]);
    */

    for (i = 0; i < 5; i++) {
        int time = i + 1;
        printf("Enter the row %d: ", time);
        scanf("%d %d %d %d %d", &cube[i][0], &cube[i][1], &cube[i][2], &cube[i][3], &cube[i][4]);
    }


    // Somando linhas
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            row_totals[i] += cube[i][j];
        }
    }

    //Somando Colunas
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            column_total[i] += cube[j][i];
        }
    }

    printf("Row totals: ");
    imprimirArray(row_totals, 5);
    printf("Column totals: ");
    imprimirArray(column_total, 5);
}

void project_08() {
    limpar_console(); 

    int notas[5][5] = {0}, nota_total[5] = {0}, nota_media[5] = {0}, menor = 0, maior = 0, i, j;
    int notas_pteste[5] = {0}, media_teste[5] = {0}, menor_pteste[5] = {0}, maior_pteste[5] = {0};

    for (i = 0; i < 5; i++) { // notas alunos
        int time = i + 1;
        printf("Entre com a nota do aluno %d: ", time);
        scanf("%d %d %d %d %d", &notas[i][0], &notas[i][1], &notas[i][2], &notas[i][3], &notas[i][4]);
    }

    for (i = 0; i < 5; i++) { // nota total
        for (j = 0; j < 5; j++) {
            nota_total[i] += notas[i][j];
        }
    }

    for (i = 0; i < 5; i++) { // nota total
        nota_media[i] = nota_total[i] / 5;
    }

    for (j = 0; j < 5; j++) { // notas por teste
        for (i = 0; i < 5; i++) {
            notas_pteste[j] += notas[i][j];
        }
    }

    for (i = 0; i < 5; i++) { // media teste
        media_teste[i] = notas_pteste[i] / 5;
    }

    for (j = 0; j < 5; j++) {
        maior = 0;
        for (i = 0; i < 5; i++) {
            if (notas[i][j] > maior) {
                maior = notas[i][j];
            }
        }
        maior_pteste[j] = maior; 
    }

    for (j = 0; j < 5; j++) { 
        i = 0;
        menor = notas[i][j];
        for (i = 0; i < 5; i++) {
            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }
        }
        menor_pteste[j] = menor;
    }

    printf("\n-- Resultados: --");
    printf("\n>> Médias alunos <<");
    for (i = 0; i < 5; i++) {
        int time = i + 1;
        printf("\nMedia Aluno %d: %d", time, nota_media[i]);
    }

    printf("\n>> Media por teste <<");
    for (i = 0; i < 5; i++) {
        int time = i + 1;
        printf("\nMedia Teste %d: %d", time, media_teste[i]);
    }

    printf("\n>> Maior nota por teste <<");
    for (i = 0; i < 5; i++) {
        int time = i + 1;
        printf("\nMaior Nota Teste %d: %d", time, maior_pteste[i]);
    }

    printf("\n>> Menor nota por teste <<");
    for (i = 0; i < 5; i++) {
        int time = i + 1;
        printf("\nMenor Nota Teste %d: %d", time, menor_pteste[i]);
    }
}

void project_09() {
    /* 
    * Write a program that generates a "random walk" across a 10 x 10 array. The array will 
    * contain characters (all '.' initially). The program must randomly "walk" from element to element, 
    * always going up, down, left, or right by one element. The elements visited by the 
    * program will be labeled with the letters A through Z, in the order visited.
    * 
    * Hint: Use the srand and rand functions to generate random numbers. After generating a number, 
    * look at its remainder when divided by 4. There are four possible values for the remainder—0, 1, 2, 
    * and 3—indicating the direction of the next move. Before performing a move, check that 
    * (a) it won't go outside the array, and (b) it doesn't take us to an element that already has 
    * a letter assigned. If either condition is violated, try moving in another direction. 
    * If all four directions are blocked, the program must terminate.
    */


}

void project_09() {
    limpar_console();

    char campo[10][10] = {'.'};
    char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
}

int main() {
    
    project_08();
    printf("\n");
    return 0;
}