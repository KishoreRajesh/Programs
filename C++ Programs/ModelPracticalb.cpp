#include<iostream>
using namespace std;

void bubbleSort(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        } else {
            cout << arr2[j] << " ";
            j++;
        }
    }
    while (i < m) {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < n) {
        cout << arr2[j] << " ";
        j++;
    }
    cout << endl;
}

int main() {
    int a1[50];
    int a2[50];
    int m,n;
    cout << "Enter size of the 1st Array : ";
    cin >> m;
    cout << "Enter elements of 1st Array :";
    for(int i =0; i<m; i++){
        cin >> a1[i];
    }
    cout << "Enter size of the 2nd Array : ";
    cin >> n;
    cout << "Enter elements of 2nd Array :";
    for(int i =0; i<n; i++){
        cin >> a2[i];
    }

    cout << "Merged Array : " << endl;
    bubbleSort(a1, a2, m, n);

    return 0;
}