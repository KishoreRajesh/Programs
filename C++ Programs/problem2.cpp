#include <iostream>
using namespace std;
int checkPrime(int num);
int no = 0;

int main(){
    int u;
    int l;
    cout << "---------------------Finding Prime Number -----------------------\n";
    cout << "Enter a lower limit :" ;
    cin >> l;
    cout << "Enter a upper limit :";
    cin >> u;
    cout << "-----------------------------------------------------------------\n";
    for(int i = l;i <= u;i++){
        if(checkPrime(i)) 
            cout <<i<< " ";        
    }
    cout << "\nNo of prime number is the range is " << no << endl; 
    cout << "-----------------------------------------------------------------\n";
    return 0;
}

int checkPrime(int num){
    if(num == 0 || num == 1 || num == 4){
        return 0;
    }else{
        int num1 = num/2;
        for(int i = 2;i<num1;i++){
            if(num % i == 0){
                return 0;
            }
        }
    }
    no ++;
    return 1;
}