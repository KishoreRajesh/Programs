#include <iostream>
#include<cmath>
using namespace std;

bool isAmstrong(int);
int digits(int);

int main(){
    int uLimit ;
    int lLimit ;
    cout << "Enter the lower Limit " ;
    cin >> lLimit;
    cout << "Enter the Upper Limit " ;
    cin >> uLimit;
    for(int i =lLimit;i<=uLimit;i++){
        if(isAmstrong(i)){
            cout << i << endl;
        }
    }
    return 0;
}

// int digits(int num){
//     int count =0;
//     while(num>0){
//         num = num%10;
//         num/=10;
//         count++;
//     }
//     return count;
// }

bool isAmstrong(int num){
    int remainder,result,temp;
    temp = num;
    while(temp>=0){
        remainder = temp%10;
        result  += pow(remainder,3);
        temp /= 10;
    }
    cout << result << endl;
    if(result == num){
        return 1;
    }else{
        cout << 'k';
        return 0;
    }   
}