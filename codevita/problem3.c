#include <stdio.h>
#include <stdlib.h>

void fillJug(int N, int* cups, int L) {
    // Sort cups in descending order
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (cups[i] < cups[j]) {
                int temp = cups[i];
                cups[i] = cups[j];
                cups[j] = temp;
            }
        }
    }

    int filled[N];
    for (int i = 0; i < N; i++) {
        filled[i] = 0;
    }

    int remainingCapacity = L;
    for (int i = 0; i < N; i++) {
        while (remainingCapacity >= cups[i]) {
            remainingCapacity -= cups[i];
            filled[i]++;
        }
    }

    // Check if all cups have been used, and minimize the sum of frequencies
    int totalFilled = 0;
    for (int i = 0; i < N; i++) {
        totalFilled += filled[i];
    }

    while (totalFilled < N) {
        for (int i = 0; i < N; i++) {
            if (filled[i] < filled[N - 1]) {
                remainingCapacity += cups[i];
                filled[i]--;
                filled[N - 1]++;
            }
        }
        totalFilled++;
    }

    // Output
    printf("Cups used: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", cups[i]);
    }
    printf("\n");

    printf("Frequencies: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", filled[i]);
    }
    printf("\n");
}

int main() {
    int N, L;
    scanf("%d", &N);
    int cups[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &cups[i]);
    }

    scanf("%d", &L);

    fillJug(N, cups, L);
    
    return 0;
}
