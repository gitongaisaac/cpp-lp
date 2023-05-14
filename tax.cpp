#include <iostream>

using namespace std;

class Tax {
private:
    double grossPay, netPay, tax;
    char gender;

public:
    void inputs();
    void computeTax();
    void print();
};

void Tax::inputs() {
    cout << "Gender(f for female and m for male): " << endl;
    cin >> gender;

    cout << "Gross pay: " << endl;
    cin >> grossPay;

    cout << endl;
}

void Tax::computeTax() {
    if (gender == 'f' || gender == 'F') {
        if (grossPay < 15000 && grossPay > 0) {
            tax = grossPay * 0.12;

        } else if (grossPay >= 15000) {
            tax = grossPay * 0.14;

        } else {
            cout << "Your gross pay cannot be less than 0" << endl;
        }

    } else if (gender == 'm' || gender == 'M') {
        if (grossPay < 14000 && grossPay > 0) {
            tax = grossPay * 0.13;

        } else if (grossPay >= 14000) {
            tax = grossPay * 0.15;

        } else {
            cout << "Your gross pay cannot be less than 0" << endl;
        }
    } else {
        cout << "Gender can only be f (female) or m (male) in lower or upper case" << endl;
    }

    netPay = grossPay - tax;
}

void Tax::print() {
    string gen;

    if (gender == 'f' || gender == 'F') {
        gen = "Female";
    } else {
        gen = "Male";
    }

    cout << "Gender: " << gen << endl;
    cout << "Gross Pay: " << grossPay << endl;
    cout << "Tax Amount: " << tax << endl;
    cout << "Net Pay: " << netPay << endl;
}

int main() {
    Tax t;

    t.inputs();
    t.computeTax();
    t.print();

    return 0;
}