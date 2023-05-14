#include<iostream>
#include<string.h>

using namespace std;

struct student {
    string firstName, lastName;
    int dateOfBirth;
    double feePayable, feePaid, balance;
};

double structure() {
    struct student std1, std2;

    double totalBalance;

    cout << "STUDENT 1" << endl;
    cout << "First Name: " << endl;
    cin >> std1.firstName;

    cout << "Last Name: " << endl;
    cin >> std1.lastName;

    cout << "Fee payable: " << endl;
    cin >> std1.feePayable;

    cout << "Fee paid: " << endl;
    cin >> std1.feePaid;

    cout << endl;

    cout << "STUDENT 2" << endl;
    cout << "First Name: " << endl;
    cin >> std2.firstName;

    cout << "Last Name: " << endl;
    cin >> std2.lastName;

    cout << "Fee payable: " << endl;
    cin >> std2.feePayable;

    cout << "Fee paid: " << endl;
    cin >> std2.feePaid;

    std1.balance = std1.feePayable - std1.feePaid;
    std2.balance = std2.feePayable - std2.feePaid;

    totalBalance = std1.balance + std2.balance;

    cout << endl;

    cout << std1.firstName << " " << std1.lastName << endl;
    cout << "Fee payable: " << std1.feePayable << endl;
    cout << "Fee paid: " << std1.feePaid << endl;
    cout << "Fee Balance: " << std1.balance << endl;

    cout << endl;

    cout << std2.firstName << " " << std2.lastName << endl;
    cout << "Fee payable: " << std2.feePayable << endl;
    cout << "Fee paid: " << std2.feePaid << endl;
    cout << "Fee Balance: " << std2.balance << endl;

    cout << endl;

    return totalBalance;
}

int main() {
    double totalBalance;
    totalBalance = structure();
    cout << "Total Balance: " << totalBalance << endl;

    return 0;
}