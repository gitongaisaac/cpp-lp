#include<iostream>
#include<math.h>
#define pi 3.142

using namespace std;

class Circle{
	private:
		int radius;
		double area, perimeter;
		
	public:
        Circle(int r);
		Circle();
		~Circle();
		void getRadius();
		void computeArea();
		void computePerimeter();
		void print();
};


Circle::Circle(int r) {
    radius = r;
}

Circle::Circle() {
    radius = 2;
}

Circle::~Circle() {}


void Circle::getRadius() {
    cout << "enter the radius" << endl;
    cin >> radius;
}

void Circle::computeArea() {
    area = pi * pow(radius,2);
}

void Circle::computePerimeter() {
    perimeter = pi * radius * 2;
}

void Circle::print() {
    cout << "area= " << area << "\n" << " perimeter= " << perimeter << endl;
}

int main(){
	Circle c1, c2, c3(12);

	c1.getRadius();
	c1.computeArea();
	c1.computePerimeter();
	c1.print();
	
//	c2.getRadius();
	c2.computeArea();
	c2.computePerimeter();
	c2.print();
	
//	c3.getRadius();
	c3.computeArea();
	c3.computePerimeter();
	c3.print();
	
	return 0;
}
