#include<iostream>
#include<vector>
using namespace std;
void display();
void printList(vector<int>);
void addElements(vector<int>&);
void meanList(vector<int>&);
void smallest(vector<int>&);
void largest(vector<int>&);
double meanCalc(vector<int>&);

int main(){
    vector<int>vec ;
    char choice ;
    char selection;
    vec.push_back(23);
    vec.push_back(45);
    vec.push_back(67);

    do{
        display();
        cin >> selection;
        if(islower(selection)){
            choice = toupper(selection);
        }
        if(choice == 'P'){
            if(vec.empty()){
                cout << "[] - the list is empty.." << endl;
            }else{
                printList(vec);
                continue;
            }      
        }else if(choice == 'A'){
            addElements(vec);
            continue;
        }else if(choice == 'M'){
            meanList(vec);
            continue;
        }else if(choice == 'S'){
            smallest(vec);
            continue;
        }else if(choice == 'L'){
            largest(vec);
            continue;
        }else if(choice == 'Q'){
            cout << "Thanks ..." << endl;
            continue;
        }
    }while (choice != 'Q');
    return 0;
}
void display(){
        cout <<"\n--------------------------------"<< endl;
        cout << "P - printing the list" << endl;
        cout << "A - add elements to list" << endl;
        cout << "M - find the mean of the list" << endl;
        cout << "S - find the smallest of the list" << endl;
        cout << "L - find the largest of the list" << endl;
        cout << "Q - Quit" << endl;

        cout << "Enter your selection : ";
}

void printList(vector<int> p){
    cout << "[ ";
    for(auto i : p){
        cout << i << " " ;
    }
    cout << "]";
}

void addElements(vector<int> &a){
    int newNum = 0;
    cout << "Enter a Element to add :"<< endl;
    cin >> newNum;
    a.push_back(newNum);
    cout << newNum << " added." << endl;
}

void meanList(vector<int> &m){
    if(m.size() == 0){
        cout << "Unable to calculate the mean " << endl;
    }else{
        cout << "The mean of the list is " << meanCalc(m) << endl;
    }
}

void smallest(vector<int> &s){
    int small = s.at(0);
    for(int i =0; i< s.size(); i++){
        if(s.at(i) < small){
            small = s.at(i);
        }
    }
    cout << "The smallest value of the list is : " << small << endl;
}

void largest(vector<int> &l){
    int large = 0;
    for(auto i = 0;  i < l.size(); i++){
        if(l.at(i) > large){
            large = l.at(i);
        }
    }
    cout << "The largest value of the list is : " << large << endl;
}

double meanCalc(vector<int> &q){
    int sum = 0;
    for(int i = 0; i< q.size();i++){
        sum += q.at(i);
    }
    return static_cast<double>(sum)/q.size();
}

