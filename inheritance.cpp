#include <iostream>
#include <cmath>
#define pi 3.14

using namespace std;

//void test() {
//    char grade[4];
//
////    string header[] = {"RegNO", "Cat 1", "Cat 2", "Asgn 1", "Asgn 2", "Exam", "Avg", "Grade"};
//    string reg[] = {"1293", "0131", "0034", "0210"};
//    double test[4][5] = {
//                    {12, 15, 40, 25, 50},
//                    {23, 10, 39, 28, 60},
//                    {18, 9, 35, 28, 55},
//                    {25, 12, 45, 36, 62}
//                    };
//
//    double cat[4], avg[4], asgn[4];
//    for (int i = 0; i < 4; ++i) {
//        for (int j = 0; j < 5; ++j) {
//            if (j < 2) {
//                cat[j] = {test[i][j] + test[i][j+1]};
//                cout << cat[j] << "\t";
//
//                avg[j] = cat[j] / 2;
//                cout << avg[j] << "\t";
//            }
//
//            if (j >= 2 && j < 4) {
//                asgn[j] = test[i][j] + test[i][j+1];
//                cout << asgn[j] << "\t";
//            }
//        }
//        cout << endl;
//    }
//}

/* Super Class */
class Shapes {
protected:
    double area, perimeter;

public:
    void print() const;
};

/* Inherits from Shapes ---- Subclass */
class Circle: public Shapes {
private:
    int radius;

public:
    void getRadius();
    void computeArea();
    void computePerimeter();
};

/* Inherits from Shapes ---- Subclass */
class Rectangle: public Shapes {
private:
    int length, width;

public:
    void getDimensions();
    void computeArea();
    void computePerimeter();
};

void Circle::getRadius() {
    cout << "Enter Radius: " << endl;
    cin >> radius;

    cout << endl;
}

void Circle::computePerimeter() {
    perimeter = pi * (radius * 2);
}

void Circle::computeArea() {
    area = 2 * pi * pow(radius, 2);
}

void Rectangle::getDimensions() {
    cout << "Enter Length: " << endl;
    cin >> length;

    cout << "Enter width: " << endl;
    cin >> width;

    cout << endl;
}

void Rectangle::computePerimeter() {
    perimeter = (length + width) * 2;
}

void Rectangle::computeArea() {
    area = length * width;
}

void Shapes::print() const {
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    cout << endl;
}


class Vehicle {
private:
    string car;

public:
    Vehicle() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Type of Vehicle(car) is Marcedez Benz" << endl;
    }
};

class Electric : public Vehicle {
public:
    Electric() {
        cout << "This is an electric vehicle" << endl;
    }
};

class TypeOfBrand : public Car {
private:
    string brand;

public:
    void typeOfBrand(string a);
};

void TypeOfBrand::typeOfBrand(string a) {
    brand = a;
    cout << "Type of Brand is " << a << endl;
}



int main() {
//    Circle cir{};
//    Rectangle rec{};
//
//    cir.getRadius();
//    cir.computePerimeter();
//    cir.computeArea();
//    cir.print();
//
//    rec.getDimensions();
//    rec.computePerimeter();
//    rec.computeArea();
//    rec.print();

    Car c;
    Electric e;

    return 0;
}