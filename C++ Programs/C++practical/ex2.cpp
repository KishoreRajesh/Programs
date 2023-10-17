#include<iostream>
using namespace std;

int main(){
    int i,j,k,n,a[6];
    cout << "\nEnter no of elements : ";
    cin >> n;
    cout << "\nEnter Array Elements : ";
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(i =0;i<n;i++){
        for(j =i+1;j<n;){
            if(a[i] == a[j]){
                for(k =j;k<n-1;k++){
                    a[k] = a[k+1];
                    n--;
                }
            }else{
                j++;
            }    

        }
    }
    
    cout << "Array After removing the duplicates,\n";
    for(i = 0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}