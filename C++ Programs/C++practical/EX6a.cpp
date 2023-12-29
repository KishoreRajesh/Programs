#include <iostream>
using namespace std;
class cal{
	public:
		static int sub(int a, int b){
			return a-b;
		}
		static int sub(int a, int b, int c){
			return a-b-c;
		}
};
int main(){
	cal c;
	cout << c.sub(20, 10) <<endl;
	cout << c.sub(60, 40, 10) <<endl;
	return 0;
}