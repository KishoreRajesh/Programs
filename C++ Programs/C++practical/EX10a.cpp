#include <iostream>
using namespace std;

class Baseemployee {
protected:
    string name;
    int age;

public:
    void setName(string n) { 
        name = n;
    }

    void setAge(int a) {
        age = a;
    }
};

class Companydetails : public Baseemployee {
protected:
    string companyName;

public:
    void setCompanyName(string company) { 
        companyName = company;
    }
};

class Salary : public Companydetails {
protected:
    double salary;

public:
    void setSalary(double s) {
        salary = s;
    }

    void display() {
        cout << "Employee Details : " << endl;
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl;
        cout << "Company: " << companyName << endl; 
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Salary employee;
    string empName, companyName1; 
    int employeeAge;
    double empSalary;

    cout << "Enter Name: ";
    cin >> empName;
    cout << "Enter Age: ";
    cin >> employeeAge;
    cout << "Enter Company Name: ";
    cin >> companyName1; 
    cout << "Enter Salary: ";
    cin >> empSalary;

    employee.setName(empName); 
    employee.setAge(employeeAge);
    employee.setCompanyName(companyName1);
    employee.setSalary(empSalary);
    employee.display();

    return 0;
}
