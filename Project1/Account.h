//Account.h

#pragma once
#include <string>
#include "Money.h"
using namespace std;

class Account {
private:
    string name;
    int num;
    double perc;
    Money sum;

 public:
    void SetName(string value) { name = value; }
    void SetNum(int value) { num = value; }
    void SetPerc(double value) { perc = value; }
    void SetMoney(Money value) { sum = value; }
    string GetName() { return name; }
    int GetNum() { return num; }
    double GetPerc() { return perc; }
    Money GetSum() { return sum; }
    void Init(string name1, int num1, double perc1, Money sum1);
    void Read();
    void Display();

    void ChangeName(string value) { name = value; }
    void Withdraw(Money value);
    void TopUp(Money value);
    void Interest();
    void Dollar();
    void Euro();

    string toString();
};