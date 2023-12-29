#include<iostream>

class Calculator {
public:
    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add three floating-point numbers
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
	int a, b, c;
	float d, e;
    Calculator calculator;
    std::cout << "Enter the variables: ";
    std::cin >> a >> b >> c;
    int sumIntegers = calculator.add(a, b, c);
    std::cout << "Sum of integers: " << sumIntegers << std::endl;
    std::cout << "Enter the floating variables: ";
    std::cin >> d >> e;
    float sumFloats = calculator.add(d, e);
    std::cout << "Sum of floats: " << sumFloats << std::endl;

    return 0;
}
