#include <iostream>
#include <math.h>
# define pi 3.142

using namespace std;

/* Accessing  private variables outside the class using the get and set methods */
class A {
private:
    int a;

protected:
    int b;

public:
    int c;
    int getA();
    void setA(int x);
    friend int friendToa(A obj);
};

/* Get Method */
int A::getA() {
    return a;
}

/* Set Method */
void A::setA(int x) {
    if (x < 0) {
        cout << "Invalid input " << endl;
    } else {
        a = x;
    }
}


/* Friend Functions */
int friendToa(A obj) {
    return obj.a;
}

class Shape {
protected:
    double area, perimeter;

public:
    void print();
};

class Circle:public Shape {
private:
    int radius;

public:
    void getRadius();
    void computeArea();
    void computePerimeter();
};

void Circle::getRadius() {
    cout << "Enter radius " << endl;
    cin >> radius;
}

void Circle::computeArea() {
    area = pi * pow(radius, 2);
}

void Circle::computePerimeter() {
    perimeter = pi * (2 * radius);
}

void Shape::print() {
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}

int main() {
        A obj;
    int x;

    x = friendToa(obj);
    obj.setA(4);
//    obj.b = 3;
    obj.c = 4;

    cout << "a = " << obj.getA() << endl;
//    cout << "b = " << obj.b << endl;
    cout << "c = " << obj.c << endl;
    cout << "x = " << x << endl;

    
    Circle cir;
    cir.getRadius();
    cir.computeArea();
    cir.computePerimeter();
    cir.print();

    return 0;
}















