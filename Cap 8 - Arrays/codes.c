#include <stdio.h>
#include <stdbool.h>

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void full_array(int array[], int tamanho) {
    
    printf("\nPreenchendo Array!");
    for (int i = 0; i < tamanho; ++i) {
        array[i] = i;
    }

    printf("\nValor inserido: ");
    imprimirArray(array, tamanho);    
}

void clear_array(int array[], int tamanho) {
    printf("\nLimpando array!");
    for (int i = 0; i < tamanho; ++i) {
        array[i] = 0;
    }
    printf("\nArray limpo, valor atual: ");
    imprimirArray(array, tamanho);
}

void sum_array(int array[], int tamanho) {
    int x = 0;
    printf("\nSomando array!");
    for (int i = 0; i < tamanho; ++i) {
        x += array[i];
    }

    printf("\nA soma de todos os valores do array é %d\n", x);
}

void reverse_array(int array[], int size) {  // função que inverte os valores de um array
    // array_original = 10 >> 0 a 9
    // array_reverse = 10 >> 9 a 0

    int reversed[size], i, x, j;

    for (i = 0, j = size - 1; i < size; i++, j--) {
        reversed[i] = array[j];
    }
    
    for (i = 0; i < size; i++) {
        array[i] = reversed[i];
    }
}

int number_length(long int x) {
    int number, y, size;
    
    number = x; 

    for (size = 1; number > 0; ++size) {
        printf("\nNumero Atual: %d", number);
        printf("\nTamanho: %d", size);
        number = ( number / 10 );

    }

    return size;
}

bool repeated_digit(long int n) {
    int digit;
    bool digit_seen[10] = {false};

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    
    if (n > 0) {
        return true;
        //printf("Tem repetido");
    } 
    else {
        return false;
        //printf("Não tem repetido");
    }
}

int main() {
    long number;
    int i;
    int a[] = {1, 4, 5, 3, 2, 1, 45, 6, 2};
    


    #define SIZE ((int) (sizeof(a) / sizeof(a[0]))) 

    for (i = 0; i < SIZE; i++) {
        a[i] = 0;
    }


    
    return 0;
}