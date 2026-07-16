#include <stdio.h>

int main(){
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Insira a primeira fração: \n");
    scanf("%d/%d", &num1, &denom1);
    
    printf("Insira a primeira segunda: \n");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * num2;
    result_denom = denom1 * denom2;

    printf("Resultado da conta: %d/%d\n", result_num, result_denom);

    return 0;
}