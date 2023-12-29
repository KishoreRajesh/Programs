#include<iostream>
#include<stdexcept>
using namespace std;

class GrantException : public exception {
public:
    const char* what() const noexcept override {
        return "Grant not approved";
    }
};

class GrantProcess {
public:
    static void check(int age) {
        if (age <= 18) {
            throw GrantException();
        } else {
            cout << "Grant Approved" << endl;
        }
    }
};

int main() {
    try {
        int age;
        cout << "Enter Age: ";
        cin >> age;
        GrantProcess::check(age);
    } catch (const GrantException& ex) {
        cerr << "Error: " << ex.what() << endl;  // Comment is accurate, no changes needed
    } catch (const exception& ex) {
        cerr << "Unhandled exception error: " << ex.what() << endl;
    }
    return 0;
}
