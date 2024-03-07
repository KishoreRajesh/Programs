#include <stdio.h>

void mergeSort(int, int);
void merge(int, int, int);
int a[20], b[20];

int main() {
    int i, n;
    printf("\n--------------------------------------------------------------MERGE SORT-----------------------------------------------------------------\n");
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    mergeSort(0, n - 1);
    printf("Displaying the sorted array\n");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    return 0;
}

void mergeSort(int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        mergeSort(low, mid);
        mergeSort(mid + 1, high);
        merge(low, mid, high);
    }
}

void merge(int low, int mid, int high) {
    int m, i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    while ((i <= mid) && (j <= high)) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i = i + 1;
        } else {
            b[k] = a[j];
            j = j + 1;
        }
        k = k + 1;
    }
    if (i > mid) {
        for (m = j; m <= high; m++) {
            b[k] = a[m];
            k = k + 1;
        }
    } else {
        for (m = i; m <= mid; m++) {
            b[k] = a[m];
            k = k + 1;
        }
    }
    for (k = low; k <= high; k++) {
        a[k] = b[k];
    }
}
