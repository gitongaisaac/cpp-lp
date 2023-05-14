#include <iostream>

using namespace std;

//void swap(int *x, int *y);

void trial() {
    int temp, *a, *b;

    cout << "Enter 2 different variables: " << endl;
    cin >> *a >> *b;

    temp = *a;
    *a = *b;
    *b = temp;

    cout << "Before interchanging a = " << *a << " and b = " << *b << endl;
    cout << "After interchanging a = " << &a << " and b = " << &b << endl;
}

void swap(int *x, int *y) {
	int temp;
	temp = *x;

	*x = *y;
	*y = temp;
}

int main() {
//    int a, b;
//
//    cout << "Enter 2 different values\n";
//    cin >> a >> b;
//    cout << "Before interchanging a = " << a << " and b = " << b << endl;
//
//    swap(&a, &b);
//
//    cout << "After interchanging a = " << a << " and b = " << b << endl;

    trial();

    return 0;
}
