#include <stdio.h>

int isPrime(long long num);

int main() {
    int n;
    int valid = 1;

    printf("Enter the n value: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. N must be a positive integer.\n");
        return 1;
    }

    int num[n];

    printf("Enter the values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int q = num[0];
    for (int i = 0; i < n; i++) {
        if (num[i] < q) {
            q = num[i];
        }
    }

    long long i;
    for (i = q; i < 10000000000LL; i++) {
        valid = 1;

        for (int j = 0; j < n; j++) {
            if (num[j] != q && i % num[j] != q) {
                valid = 0;
                break;
            }
        }

        if (valid && isPrime(i)) {
            printf("%lld\n", i);
            return 0; 
        }
    }

    printf("None");
    return 0;
}

int isPrime(long long num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }
    long long i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
        i += 6;
    }
    return 1;
}
