
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void generate(int n, int position) {
    if (position == n) {
        return;
    }

    printf("%d ", fibonacci(position));

    generate(n, position + 1);
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative number.\n");
    } else {
        printf("Fibonacci series: ");
        generate(n, 0);
        printf("\n");
    }

    return 0;
}
