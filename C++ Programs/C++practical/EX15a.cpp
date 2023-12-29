#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template <typename T>
void printList(const vector<T> &elements){
    for(const auto &element : elements){ // changed the loop variable name to avoid conflict
        cout << element << " ";
    }
    cout << endl;
}

int main(){
    vector<int> elements;
    elements.push_back(25);
    elements.push_back(44);
    elements.push_back(30);
    elements.push_back(69);
    elements.push_back(99);
    sort(elements.begin(), elements.end(), greater<int>());
    cout << "Sorted List in descending Order: ";
    printList(elements);
    return 0;
}
