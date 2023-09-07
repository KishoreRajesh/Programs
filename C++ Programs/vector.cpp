#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vList;

    for(auto i =1; i<= 10;i++){
        vList.push_back(i);
    }
    for(auto i = vList.begin(); i != vList.end(); i++){
        cout << *i;
        cout << endl;
    }
    cout <<  "The size of the Vector :" <<vList.size() << endl;
    vList.pop_back();
    for(auto i = vList.begin(); i != vList.end(); i++){
        cout << *i;
        cout << endl;
    }

return 0;
}
