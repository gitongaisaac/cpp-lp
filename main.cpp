#include <iostream>
#include <math.h>
#define pi 3.142

using namespace std;

// Write a program that auto-generates an integer value made up of 3 digits e.g. 345. The program should then compute and
// display the sum of the digits

// Write a program that accepts 2 co-ordinates of 2 points, ie. p1(x1, y1), p2(x2, y2). Them compute and display
// the distance between the 2 points

int xym() {
int x = 7, y = 5, m =0;
y+=10 + x++ - m;
m = --y;
x = --x + m;
y = 3 - (--x) + m++;

cout<< "y = "<< y<< "   "<< "x = "<< x <<"   "<< "m = "<< m <<endl;

    return 0;
}

int digitsGenerator() {
    int digitOne, digitTwo, digitThree, x;

    x = log(45);
    digitOne = floor(x);
    digitTwo = digitOne++;
    digitThree = digitOne + digitTwo;

    cout << "Generated digits: " << digitOne << "," << digitTwo << "," << digitThree << endl;

    int sum = digitOne + digitTwo + digitThree;

    cout << sum << endl;

    return 0;
}

int coordinates() {
    float a, b, c, d;

    cout << "Enter x-coordinate of the first point: ";
    cin >> a;

    cout << "Enter x-coordinate of the second point: ";
    cin >> c;

    cout << "Enter y-coordinate of the first point: ";
    cin >> b;

    cout << "Enter y-coordinate of the second point: ";
    cin >> d;

    cout << "Coordinates  A (" << a << ", " << b << ")" << endl;
    cout << "Coordinates B (" << c << ", " << d << ")" << endl;

    float xCoordinates = c - a;
    float yCoordinates = d - b;

    float magnitude = sqrt(pow(xCoordinates, 2) + pow(yCoordinates, 2));

    cout << magnitude << endl;

    return 0;
}

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

int ifStatement() {
    int age;

    cout << "Enter your age: ";
    cin >> age;


    if (age < 12 ) {
        cout << "You are a kid" << endl;
    } else if (age <= 19 ) {
        cout << "You are a Teenager" << endl;
    } else if (age <= 35) {
        cout << "You are a youth" << endl;
    } else {
        cout << "You are an old folk" << endl;
    }

    return 0;
};

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

int switchCase() {
    int day;
    char letter;

    cout << "Enter Choice: " << endl;

    cin >> day;

    switch (day) {
        case 1: cout << "Monday" << endl;
            break;

        case 2: cout << "Tuesday" << endl;
            break;

        case 3: cout << "Wednesday" << endl;
            break;

        case 4: cout << "Thursday" << endl;
            break;

        case 5: cout << "Friday" << endl;
            break;

        case 6: cout << "Saturday" << endl;
            break;

        case 7: cout << "Sunday" << endl;
            break;

        default: cout << "Invalid entry" << endl;

    }

    cout << "Enter a letter: ";
    cin >> letter;

    switch (letter) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': cout << letter << " is a vowel" << endl;
            break;

        default: cout << letter << " is not a vowel" << endl;
    }

    return 0;
}

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

int loops() {
    int i, sum = 0;

    i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 10);

    cout << "The sum = " << sum << endl;

    i = 1;
    while(i <= 3) {
        sum += i;
        i++;
    }

    cout << "The sum = " << sum << endl;

        for (int j = 0; j < 5; j++) {
            for (int i = 0; i < 5; i++) {
            if (j == 0 || j == 4 || j == i) {
                cout << "&\t";
            } else {
                cout << "*\t";
            }
        }
            cout << "\n";
    }

    cout << "\nThe sum = " << sum << endl;


    for (int j = 1; j <= 3 ; j++) {
        cout << "j is less than or equal to 3" << endl;
    }


    return 0;
}

void input() {
    int radius;
    cout << "Enter the value of radius" << endl;
    cin >> radius;
}

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

string gender;
double grossPay;
double taxAmount;

double tax() {
    cout << "Enter your gross payment" << endl;
    cin >> grossPay;

    cout << "Enter gender in small case" << endl;
    cin >> gender;

    if (gender == "female") {
        if (grossPay < 15000) {
            taxAmount = grossPay * 0.12;

        } else {
            taxAmount = grossPay * 0.14;
        }

    } else if (gender == "male") {
        if (grossPay < 14000) {
            taxAmount = grossPay * 0.13;

        } else {
            taxAmount = grossPay * 0.15;
        }

    } else {
        cout << "This gender does not exist" << endl;
    }

    return taxAmount;
}

int runTax() {
    double netPay;

    tax();

    netPay = grossPay - taxAmount;

    cout << "Gender: " << gender << endl;
    cout << "Gross Pay: " << grossPay << endl;
    cout << "Tax Amount: " << taxAmount << endl;
    cout << "Net Pay: " << netPay << endl;

    return 0;
}

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

double computeArea(int radius) {
    double area;
    area = pi * pow(radius, 2);

    return area;
}

double computePerimeter(int radius) {
    double perimeter;
    perimeter = pi * radius * 2;

    return perimeter;
}

double  runRadius() {
    int rad;

    cout << "Enter the radius\n";
    cin >> rad;

    cout << "Area = " << computeArea(rad) << endl;
    cout << "Perimeter = " << computePerimeter(rad) << endl;

    return 0;
}

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

void arrays() {
    int lowest, highest, passed, failed;
    double average, sum;

    int marks[] = {54, 63, 23, 49, 81, 38, 67, 18, 44, 59};


    sum = 0;
    lowest = highest = marks[0];
    failed = passed = 0;
    for (int i = 0; i < 10; i++) {
        sum += marks[i];

        if (marks[i] < lowest) {
            lowest = marks[i];
        }

        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] >= 40) {
            passed++;
        } else {
            failed++;
        }
    }

    cout << "Sum = " << sum << endl;
    average = sum / 10;
    cout << "Average = " << average << endl;
    cout << "Lowest Score = " << lowest << endl;
    cout << "Highest Score = " << highest << endl;
    cout << "Failed Students = " << failed << "\nPassed Students = " << passed << endl;
}

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

void singleDimensionalArrays2() {
    int lowest, highest, passed, failed;
    double average, sum;

    int marks[10]; //= {54, 63, 23, 49, 81, 38, 67, 18, 44, 59};


    sum = 0;
    lowest = highest = marks[0];
    failed = passed = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter mark for student: " << (i + 1) << endl;
        cin >> marks[i];

        sum += marks[i];

        if (marks[i] < lowest) {
            lowest = marks[i];
        }

        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] >= 40) {
            passed++;
        } else {
            failed++;
        }
    }

    cout << "Sum = " << sum << endl;
    average = sum / 10;
    cout << "Average = " << average << endl;
    cout << "Lowest Score = " << lowest << endl;
    cout << "Highest Score = " << highest << endl;
    cout << "Failed Students = " << failed << "\nPassed Students = " << passed << endl;
}

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

void multiDimensionalArrays() {
    /* Given that the pass mark is 35 find */
    int passed, failed, highest, lowest, length;
    double avg, sum;

    int marks[4][3] = {
            {43, 57, 21},
            {38, 54, 58},
            {93, 34, 23},
            {32, 11, 21}
    };

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 3; col++) {
            cout << marks[row][col] << "\t";
        }
        cout << endl;
    }

    passed = failed = length = 0;
    highest = lowest = marks[0][0];
    sum = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (marks[i][j] >= 35) {
                passed++;

            } else {
                failed++;
            }

            if (marks[i][j] > highest) {
                highest = marks[i][j];
            } else if (marks[i][j] < lowest) {
                lowest = marks[i][j];
            }

            length++;

            sum += marks[i][j];

            avg = sum / length;
        }
    }

    cout << endl;

    cout << "Length of class: " << length << endl;
    cout << "Passed students: " << passed << endl;
    cout << "Failed students: " << failed << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    cout << "Average: " << avg << endl;
}

/*
 * ====================================================================================================================
 * ====================================================================================================================
 * */

int main() {
//    singleDimensionalArrays2();
    multiDimensionalArrays();

    return 0;
}






