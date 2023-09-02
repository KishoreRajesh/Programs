#include <iostream>
using namespace std;

class Employee {
    private :
        int  salary;
    public :
        void setSalary (int s){
            salary = s;
        }
        int getSalary (){
            return salary;
        }
};

int main(){
    Employee teacher;
    teacher.setSalary(50000);
    cout << teacher.getSalary() << endl;
    return 0;
}