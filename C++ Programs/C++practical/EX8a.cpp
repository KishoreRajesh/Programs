#include <iostream>
using namespace std;
class box{
	private:
		double length, width, height;
	public:
		box(double l, double w, double h){
			length = l;
			width = w;
			height = h;
		}
		double calcvolume()const{
			return length*width*height;
		}
};
int main(){
	double length1, width1, height1;
	double length2, width2, height2;
	cout << "Enter dimensions of Box1: ";
	cin >> length1 >> width1 >> height1;
	cout << "Enter dimensions of Box2: ";
	cin >> length2 >>width2 >>height2;
	box box1(length1, width1, height1);
	box box2(length2, width2, height2);
	cout << "Volume of box1: " <<box1.calcvolume()<<endl;
	cout << "Volume of box2: " << box2.calcvolume()<<endl;
	return 0; 
}