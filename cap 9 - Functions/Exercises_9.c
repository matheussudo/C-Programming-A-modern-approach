/*
    Chapter 9 Exercises - Functions
    Start 02/09/2026 - End ??
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

void limpar_console() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

double triangle_area(double base, double height) { // Exercise 1
    double product = base * height;
    return product / 2;
} 

int check(int x, int y, int n) { // Exercise 2
    if(0 < x < n - 1 && 0 < y < n - 1) {
        return 1;
    } else {
        return 0;
    }
}

int gcd(int m, int n) { // Exercise 3 - No recursive pag 214
    int r = 1 ;
    int x = 0; 
    while (r != 0) {
        r = m % n;

        if (r == 0) {
            return n;
        } else {
            m = n;
            n = r ;
        }
    }
}


int digit(int n, int k) {
    int i = 1;
    int r = 0;
    while (i <= k) {
        r = n % 10;
        n /= 10;
        i++;
    }
    return r;
}

int largest(int arr[], int n) {
    int maior = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int avarage(int arr[], int n) {
    int av = 0;

    for (int i = 0; i < n; i++) {
        av += arr[i];
    }
    return av / n;
}

int count_positive(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    limpar_console();
    printf("\nDigito escolhido: %d\n", digit(1849203, 5));
}