#include <iostream>

using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size = 0;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    cout << "Enter the array elements:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int position, value;
    cout << "Enter the position to insert the new element: ";
    cin >> position;
    cout << "Enter the value of the new element: ";
    cin >> value;

    if (position < 0 || position > size) {
        cout << "Invalid position for insertion.\n";
        return 1;
    }

    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    ++size;

    cout << "Array after insertion:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
