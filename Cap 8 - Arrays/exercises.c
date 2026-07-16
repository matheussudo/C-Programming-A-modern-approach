// Exercicios sobre Arrays e manipulação de dados
// Cap 8 pag 177 
// 8 jul 2026 11pm

#include <stdio.h>
#include <stdbool.h>

// TOOLS

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void exercise_3() {
    /*
        Write a declaration of an array named weekeend containig seven bool values. Include an
        initializer that makes the first and last values true; all other values shold be false.
    */ 
}

void exercise_4() {
    /*
        Repeat exercise 3, but this time use a designated initializer. Make the initializer as short possible.
    */ 

    bool weekend[7] = {false};

}

void exercise_5() {
    /*
        The Fibonacci numbers are 0. 1, 1, 2. 3. 5. 8, 13, ... , where each number is the sum of the
        two preceding numbers. Write a program fragment that declares an array named
        fib_numbers of length 40 and fills the array with the first 40 Fibonacci numbers. Hint:
        Fill in the first two numbers individually. then use a loop to conmpute the remaining num-
        bers.

    */

    int fib_numbers[41] = {[1] = 1, [2] = 1};
    int n, a, i, x, y;


    printf("\nInitial Array: ");
    imprimirArray(fib_numbers, 41);
    // i > Percorrer
    // n = Numero dentro do fibonaci

    for (i = 3; i < 41; i++) {
        x = i - 1;
        y = i - 2;

        fib_numbers[i] = fib_numbers[x] + fib_numbers[y];
    }

    printf("\n Result Array: ");
    imprimirArray(fib_numbers, 41);


    /*
        RESULT:
        Initial Array: 0 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 

        Result Array: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711
        28657 46368 75025 121393 196418 317811 514229 832040 1346269 2178309 3524578 5702887 922746
        14930352 24157817 39088169 63245986 102334155     
    */
}

void exercise_6() {

    /*
        >> Colocar o exercicio aqui <<

    */
}

void exercise_8() {
    /* 
     * Write a declaration for a two-dimensional array named temperature_readings that
     * stores one month of hourly temperature readings. (For simplicity, assume that a
     * month has 30 days.) The rows of the array should represent days of the month; 
     * the columns should represent hours of the day.
    */

    float temparature_readings[30][24];
    float temp_sum, media;
    int x, i;
    temp_sum = 0.0;
    for (i = 0; i <= 29; i++) {
        for (x = 0; x <= 23; x++) {
            temp_sum += temparature_readings[i][x];
        }
    }
    media = temp_sum / 720;
}

void exercise_10() {
    /*
        Write a declaration for an 8 x 8 har array named chess_board. Include an initializer that puts the following data into the array,
        one character per array element
    */
    
    int i, x;
    char chess_board[8][8] = {
        // {{''}, {''}, {''}, {''}, {''}, {''}, {''}, {''}},

        {{'r'}, {'n'}, {'b'}, {'q'}, {'k'}, {'b'}, {'n'}, {'r'}},
        {{'p'}, {'p'}, {'p'}, {'p'}, {'p'}, {'p'}, {'p'}, {'p'}},
        {{' '}, {'.'}, {' '}, {'.'}, {' '}, {'.'}, {' '}, {'.'}},
        {{'.'}, {' '}, {'.'}, {' '}, {'.'}, {' '}, {'.'}, {' '}},
        {{' '}, {'.'}, {' '}, {'.'}, {' '}, {'.'}, {' '}, {'.'}},
        {{'.'}, {' '}, {'.'}, {' '}, {'.'}, {' '}, {'.'}, {' '}},
        {{'P'}, {'P'}, {'P'}, {'P'}, {'P'}, {'P'}, {'P'}, {'P'}},
        {{'R'}, {'N'}, {'B'}, {'Q'}, {'K'}, {'B'}, {'N'}, {'R'}}
    };

    printf("\n-- CHESS BOARD -- ");

    for (i = 0; i <= 7; i++) {
        printf("\n");
        for (x = 0; x <= 7; x++) {
            printf("%c ", chess_board[i][x]);
        }
    }
    printf("\n");
}

void exercise_11() {
    /* 
        * Write a program fragment that declares an 8 x 8 char array named checker_board 
        * and then uses a loop to store the following data into the array (one character 
        * per array element):
        * 
        * B R B R B R B R
        * R B R B R B R B
        * B R B R B R B R
        * R B R B R B R B
        * B R B R B R B R
        * R B R B R B R B
        * B R B R B R B R
        * R B R B R B R B
        * 
        * Hint: The element in row i, column j, should be the letter B if i + j is an even number.
    */

    char checker_board[8][8];
    int i, j;

    for (j = 0; j < 7; j++) {
        
        for (i = 0; i < 7; i++) {
            if ((i + j) % 2 != 0) {
                checker_board[i][j] = 'R';
            } else {
                checker_board[i][j] = 'B';
            }
        }
    }

    printf("\n-- CHESS BOARD -- ");

    for (j = 0; j <= 7; j++) {
        printf("\n");
        for (i = 0; i <= 7; i++) {
            printf("%c  ", checker_board[i][j]);
        }
    }
    printf("\n");
}

int main() {
    exercise_11();
    
    return 0;
}