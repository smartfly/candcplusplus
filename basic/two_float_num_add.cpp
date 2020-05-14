//
// Created by smartfly on 2020/4/29.
// c++ use two float https://draveness.me/whys-the-design-decimal-and-rational/
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double f1,f2;
    f1 = 0.1;
    f2 = 0.2;
    cout << "double d :" << setprecision(17) << f1 + f2 << endl;
    return 0;
}