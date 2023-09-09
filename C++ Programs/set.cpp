#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>mySet;
    mySet.insert(2);
    mySet.insert(4);
    mySet.insert(6);
    mySet.insert(8);
    mySet.insert(10);

    for(auto it = mySet.begin(); it != mySet.end();it++){
        cout << *it << " ";
    }
    cout << endl;
 

    return 0;
}
