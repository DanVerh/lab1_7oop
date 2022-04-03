//Source.cpp

#include "Account.h"
#include "Money.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Account a;
    a.Init("Daniil", 0101, 0.5, 2000);
    a.Display();
    a.TopUp(500);
    cout << a.GetSum();
    Account b;
    Money c;
    cout << endl;
    cout << endl;
    b.Init("John", 0102, 0.4, 0);
    b.Display();
    c.SetSum(b, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2);
    cout << b.GetSum() << endl;
    cout << b.toString();
    cout << endl;
    c.Comp(a, b);


    return 0;
}