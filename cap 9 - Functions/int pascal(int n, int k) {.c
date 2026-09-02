#include <stdio.h>                                              c

int pascal(int n, int k) {
    // Propriedades combinatórias do Triângulo de Pascal: 
    // 1C(n, k) = C(n-1, k-1) + C(n-1, k)$.

    if (n == 1 && k == 1) {
        return 1;
    }

    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

int main() {
    limpar_console();
    printf("\n%d", pascal(5, 3));
    printf("\n");
}
