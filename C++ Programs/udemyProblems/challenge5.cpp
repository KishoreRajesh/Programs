#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;
    char selection ;
    int newNum = 0;

    while(selection != 'q' || selection != 'Q'){
        cout << "\n---------------------------" << endl;
        cout << "P - Print Numbers." << endl;
        cout << "A - Add Numbers." << endl;
        cout << "M - Display mean of the Numbers." << endl;
        cout << "S - Display smallest of Numbers." << endl;
        cout << "L - Display Largest of Numbers." << endl;
        cout << "Q - Quit." << endl;
        cout << "Enter Your choice : ";
        cin >> selection;
        if(selection == 'p' || selection == 'P'){
            if(vec.empty()){
                cout << "[] - List is empty." << endl;
            }else{
                cout << "[ ";
                for(int i = 0; i < vec.size(); i ++){
                    cout << vec.at(i) << " ";
                }
                cout << "]" << endl;
            }
            continue;
        }else if(selection == 'a' || selection == 'A'){
            cout << "Enter a new number to add :";
            cin >> newNum;
            vec.push_back(newNum);
            cout << newNum << " added." << endl;
            continue;
        }else if(selection == 'm'|| selection == 'M'){
            int result =0;
            double mean =0;
            for(int i =0;i < vec.size();i++){
                result += vec.at(i);
            }
            mean = result / vec.size();
            cout << "The mean of the Numbers :" << mean << endl;
            continue;
        }else if(selection == 's' || selection == 'S'){
            cout << "Smallest number = " << *min_element(vec.begin(),vec.end()) << endl;
            continue;
        }else if(selection == 'L' || selection == 'l'){
            cout << "Largest number = " << *max_element(vec.begin(),vec.end());
            continue;
        }else if(selection == 'q' || selection == 'Q'){
            cout << "Thanks..." << endl;
            break;
        }else {
            cout << "Enter a valid Option , Try again " << endl; 
        }       
    }
    return 0;
}