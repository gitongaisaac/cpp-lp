#include <iostream>

using namespace std;

class Taxation {
private:
    double grossPay, taxAmount;

public:
    Taxation(double a);
    Taxation();
    friend double taxAmt(Taxation T);
    double getGrossPay();
    void getDetails();
    void computeTax();
    void print();
};

Taxation::Taxation() {}

Taxation::Taxation(double a) {
    grossPay = a;
}

double taxAmt(Taxation T) {
    return T.taxAmount;
}

double Taxation::getGrossPay() {
    return grossPay;
}

void Taxation::getDetails() {
    cout << "Enter gross pay: " << endl;
    cin >> grossPay;

    cout << endl;
}

void Taxation::computeTax() {
    double tax1, tax2, tax3, rem, remTax;
    tax1 = 24000 * 0.08;
    tax2 = 56000 * 0.1;

    if (grossPay > 0 && grossPay <= 24000) {
        taxAmount = grossPay * 0.08;

    } else if (grossPay > 24000 && grossPay <= 56000) {
        rem = grossPay - 24000;
        remTax = rem * 0.1;

        taxAmount = tax1 + remTax;

    } else if(grossPay > 56000) {
        rem = grossPay - (56000 + 24000);
        remTax = rem * 0.3;

        taxAmount = tax1 + tax2 + remTax;
    } else {
        cout << "Your gross pay cannot be negative" << endl;
    }
}

void Taxation::print() {
    cout << "Gross Pay: " << grossPay << endl;
    cout << "Tax Amount: " << taxAmount << endl;
}

int main() {
    Taxation T, T2(130000);
    double taxAmnt, grossPay, netPay;

    T.getDetails();
    T.computeTax();
    taxAmnt = taxAmt(T);
    grossPay = T.getGrossPay();
    netPay = grossPay - taxAmnt;
    T.print();

    cout << "Net Pay: " << netPay << endl;
    cout << endl;

    T2.computeTax();
    taxAmnt = taxAmt(T2);
    grossPay = T2.getGrossPay();
    netPay = grossPay - taxAmnt;
    T2.print();

    cout << "Net Pay: " << netPay << endl;

    return 0;
}