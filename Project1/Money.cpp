//Money.cpp

#include "Money.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Money::SetSum(Account& a, int newam500, int newam200, int newam100, int newam50, int newam20, int newam10, int newam5, int newam2, int newam1, int newam050, int newam025, int newam010, int newam005, int newam002, int newam001) {
    am500 = newam500;
    am200 = newam200;
    am100 = newam100;
    am50 = newam50;
    am20 = newam20;
    am10 = newam10;
    am5 = newam5;
    am2 = newam2;
    am1 = newam1;
    am050 = newam050;
    am025 = newam025;
    am010 = newam010;
    am005 = newam005;
    am002 = newam002;
    am001 = newam001;
    a.sum = 500 * am500 + 200 * am200 + 100 * am100 + 50 * am50 + 20 * am20 + 10 * am10 + 5 * am5 + 2 * am2 + am1 + 0.5 * am050 + 0.25 * am025 + 0.1 * am010 + 0.05 * am005 + 0.02 * am002 + 0.01* am001;
}

Account Money::SumSum(Account &a, Account &b) {
    Account c;
    c.sum = a.sum + b.sum;
    return c;
}

Account Money::DiffSum(Account& a, Account& b) {
    Account c;
    c.sum = a.sum - b.sum;
    return c;
}

Account Money::ProdSum(Account& a, Account& b) {
    Account c;
    c.sum = a.sum * b.sum;
    return c;
}

Account Money::DivSum(Account& a, Account& b) {
    Account c;
    c.sum = a.sum / b.sum;
    return c;
}

Account Money::MultOnNum(Account &a, long double number) {
    a.sum *= number;
    return a;
}

Account Money::DivOnNum(Account& a, long double number) {
    a.sum /= number;
    return a;
}

void Money::Comp(Account& a, Account& b) {
    if (a.sum > b.sum)
        cout << "First sum is bigger" << endl;
    else if (a.sum < b.sum)
        cout << "Second sum is bigger" << endl;
    else
        cout << "Sums are equal" << endl;
}
/*string Money::toString(Account& a) {
    string d;
    stringstream sout;
    sout << a.sum << endl;
    d = sout.str();
    d.replace(d.find("."), 1, ",");
    return d;
}*/