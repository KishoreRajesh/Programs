#include<iostream>
using namespace std;

class first
{
private:
    int num1;
public:
    first(int x)
    {
        num1 = x;
    }
    friend void big(first &a,int s);
};

class second
{
private:
    int num2;
public:
    second(int x)
    {
        num2 = x;
    }
    friend int great(second &b);
};

int great(second &b)
{
    return b.num2;
}


void big(first &a,int s)
{
    if(a.num1>s)
    {
        cout << "Biggest number = " << a.num1;
    }
    else
    {
        cout << "Biggest number = " << s;
    }
}

first obj1(65);
second obj2(45);

int main()
{
    big(obj1,great(obj2));
    return 0;
}


