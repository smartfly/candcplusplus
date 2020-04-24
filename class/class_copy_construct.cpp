//
// Created by taohu on 2020/4/6.
//
#include <iostream>

using namespace std;

class LineByInt {
public:
    int getLength(void);

    LineByInt(int len);                 // 简单的构造函数
    LineByInt(const LineByInt &obj);    // 拷贝构造函数
    ~LineByInt();                       // 析构函数
private:
    int *ptr;
};

// 成员函数定义，包括构造函数
LineByInt::LineByInt(int len) {
    cout << "Normal constructor allocating ptr" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}

LineByInt::LineByInt(const LineByInt &obj) {
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr; // copy the value
}

LineByInt::~LineByInt(void) {
    cout << "Freeing memory!" << endl;
    delete ptr;
}

int LineByInt::getLength() {
    return *ptr;
}

void display(LineByInt obj) {
    cout << "Length of line : " << obj.getLength() <<endl;
}

int main() {
    LineByInt lineByInt(10);

    LineByInt line2 = lineByInt; // 这里也调用了拷贝构造函数

    display(lineByInt);
    display(line2);

    return 0;
}