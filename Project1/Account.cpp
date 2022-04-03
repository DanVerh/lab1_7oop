//Account.cpp

#include "Account.h"
#include "Money.h"
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

void Account::Init(string name1, int num1, double perc1, double sum1) {
    name = name1;
    num = num1;
    perc = perc1;
    sum = sum1;
}

void Account::Read() {
    cout << "name = "; cin >> name;
    cout << "number = "; cin >> num;
    cout << "percent = "; cin >> perc;
    cout << "sum = "; cin >> sum;
}

void Account::Display() {
    cout << name << endl;
    cout << num << endl;
    cout << perc << endl;
    cout << sum << endl;
}

void Account::Withdraw(double value) {
    sum -= value;
}

void Account::TopUp(double value) {
    sum += value;
}

void Account::Interest() {
    double percent = 0.01 * perc;
    sum = sum + sum*percent;
}

void Account::Dollar() {
    sum /= 32;
}

void Account::Euro() {
    sum /= 35;
}

string Account::toString() {
    string d;
    stringstream sout;
    sout << sum << endl;
    d = sout.str();
    d.replace(d.find("."), 1, ",");
    return d;
}
