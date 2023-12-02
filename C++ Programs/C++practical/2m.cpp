#include<iostream>
using namespace std;

class abcd{
	private:
		int a=1;
	public:
		friend void add (abcd *x,abcd *y,abcd *z);
		void get(){
			cout << "enter a :" << endl;
			cin >> a;
		}
		void disp(){			
            cout << a ;
        }
};

void add(abcd *x, abcd *y,abcd *z){
	z->a = x->a+ y->a;
}
abcd a,b,c;
int main(){
	add(&a,&b,&c);
	c.disp();
	return 0;
}



	
	
	