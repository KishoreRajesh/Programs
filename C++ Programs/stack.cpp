#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    for(int i = 1; i<= 10;i++){
        st.push(i);
    }
    cout << "The Size of the Stack before poping = " << st.size() << endl;
    while(! st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
     cout << "\nThe Size of the Stack After poping = " << st.size() << endl;
    return 0;
}