#include<iostream>
using namespace std;

int main(){
    int ch;
    int num1, num2;
    do{
        cout <<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.exit\nEnter your Choice: ";
        cin >> ch;
        switch (ch){
            case 1 :
                    
                    cout << "Enter 1st num : ";
                    cin >> num1;
                    cout << "Enter 2nd num : ";
                    cin >> num2;
                    cout << "Addition of the two numbers are " << num1 + num2 << endl;
                    break;
            case 2 :
                    cout << "Enter 1st num : ";
                    cin >> num1;
                    cout << "Enter 2nd num : ";
                    cin >> num2;
                    cout << "Subtraction of the two numbers are " << num1 - num2 << endl;
                    break;   
            case 3 :
                    cout << "Enter 1st num : ";
                    cin >> num1;
                    cout << "Enter 2nd num : ";
                    cin >> num2;
                    cout << "Multiplication of the two numbers are " << num1 * num2 << endl;
                    break;   
            case 4 :
                    cout << "Enter 1st num : ";
                    cin >> num1;
                    cout << "Enter 2nd num : ";
                    cin >> num2;
                    cout << "Division of the two numbers are " << num1 / num2 << endl;
                    break; 
            case 5 :
                    exit(0);
            default :
                    cout << "Enter a Valid Option " << endl;                              
        }
    }while(ch != 5);
    return 0;
}