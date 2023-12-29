#include <iostream>
using namespace std;
class Base{
	protected:
		int value;
	public:
		void Setvalue(int v){
			value = v;
		}
};
class Derived :public Base{
	public:
		void multiply(int Factor){
			value *=Factor;
		}
		void displayResult(){
			cout << "Result: "<< value <<endl;
		}
};
int main(){
	Derived obj;
	int uservalue, multiplier;
	cout <<"Enter value: ";
	cin >> uservalue;
	cout << "Enter a multiplier: ";
	cin >> multiplier;
	obj.Setvalue(uservalue);
	obj.multiply(multiplier);
	obj.displayResult();
	return 0;
}