#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i,flag;
    cout<<"enter the number to be checked:";
    cin>>n;
    if(n==2)
    {
        cout<<"prime number";
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    cout<<"not a prime number";
    else
    cout<<"prime number";
    return 0;
}