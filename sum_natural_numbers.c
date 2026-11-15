#include <stdio.h>

int sumNatural(int n) {
    if (n <= 0) return 0;          
    return n + sumNatural(n - 1);  
}

int main() {
    int n = 5;
    printf("Sum of first %d natural numbers = %d\n", n, sumNatural(n));
    return 0;
}