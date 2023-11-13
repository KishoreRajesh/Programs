#include <iostream>
#include <iomanip> 

using namespace std;

class Employee {
private:

    int empId;
    string empName;
    double basicSalary;
    double DA;
    double HRA;
    double incomeTax;

public:

    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, empName);

        cout << "Enter Basic Salary: $";
        cin >> basicSalary;
    }

    void calculateSalaryComponents() {
        DA = 0.25 * basicSalary;
        HRA = 800.0;
        incomeTax = 0.15 * basicSalary;
    }

    void display() {

        calculateSalaryComponents();

        cout << "\n-------- Payslip --------\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << fixed << setprecision(2);
        cout << "Basic Salary: $" << basicSalary << endl;
        cout << "DA: $" << DA << endl;
        cout << "HRA: $" << HRA << endl;
        cout << "Income Tax: $" << incomeTax << endl;
        cout << "-------------------------\n";
        cout << "Net Salary: $" << (basicSalary + DA + HRA - incomeTax) << endl;
        cout << "-------------------------\n";
    }
};

int main() {

    Employee emp;
    emp.accept();
    emp.display();
    return 0;
}
