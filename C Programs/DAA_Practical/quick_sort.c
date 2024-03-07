#include <stdio.h>

int a[20];

int partition(int, int);
void interchange(int, int);
void quick_sort(int, int);

int main() {
    int b, i;
    printf("\n-------------------------------------------------------QUICK SORT--------------------------------------------------------------\n");
    printf("\nEnter the number of elements: ");
    scanf("%d", &b);
    printf("Enter the array elements: ");
    for (i = 0; i < b; i++) {
        scanf("%d", &a[i]);
    }
    quick_sort(0, b - 1);
    printf("Displaying sorted array...\n");
    for (i = 0; i < b; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n--------------------------------------------------------------------------------------------------------------------------------\n");
    return 0;
}

void quick_sort(int p, int q) {
    int j;
    if (p < q) {
        j = partition(p, q);
        quick_sort(p, j - 1);
        quick_sort(j + 1, q);
    }
}

int partition(int low,int high) {
    int pivot=a[low];
    int h=low;
    while(low<high)
    {
        while(pivot>=a[low])
        {
            low++;
        }
        while(a[high]>pivot)
        {
            high--;
        }
        if(low<high)
        {
            interchange(low,high);
        }
    }
    interchange(h,high);
    return high;
}

void interchange(int i, int j) {
    int t;
    t = a[i];
    a[i] = a[j];
    a[j] = t;
}
