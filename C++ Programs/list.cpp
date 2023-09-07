#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>myList;
    for(auto i = 1; i <= 10;i++){
        myList.push_back(i);
    }
    for(auto i = myList.begin(); i != myList.end();i++){
        cout << *i << endl;
    }
    cout << "Size :" << myList.size();
    return 0;
}

