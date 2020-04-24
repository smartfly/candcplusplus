//
// Created by taohu on 2020/4/6.
//
#include <iostream>

using namespace std;

class BoxPtr {
public:
    // 构造函数定义
    BoxPtr(double l = 2.0, double b = 2.0, double h = 2.0) {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }

    double Volume() {
        return length * breadth * height;
    }

private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
};

int main() {
    BoxPtr boxPtr1(3.3, 1.2, 1.5);      // Declare boxPtr1
    BoxPtr boxPtr2(8.5, 6.0, 2.0);      // Declare box2
    BoxPtr *ptrBox;                             // Declare pointer to a class.

    // 保存第一个对象的地址
    ptrBox = &boxPtr1;

    // 现在尝试使用成员访问运算符来访问成员
    cout << "Volume of box1: " << ptrBox->Volume() << endl;

    // 保存第一个对象的地址
    ptrBox = &boxPtr2;

    // 现在尝试使用成员访问运算符来访问成员
    cout << "Volume of box2: " << ptrBox->Volume() << endl;

    return 0;
}

