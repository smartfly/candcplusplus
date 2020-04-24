//
// Created by taohu on 2020/4/6.
//
#include <iostream>

using namespace std;

class Line {
public:
    void setLength(double len);

    double getLength(void);

    Line(double len); // 构造函数
    ~Line(); // 析构函数
private:
    double length;
    int *ptr;
};

// 成员函数定义，包括构造函数
//Line::Line(double len) {
//    cout << "Object is being created, length = " << len << endl;
//    length = len;
//}


Line::Line(double len) : length(len) {
    cout << "Object is being created, length = " << len << endl;
}


Line::~Line(void) {
    cout << "Object is being deleted" << endl;
}

void Line::setLength(double len) {
    length = len;
}

double Line::getLength() {
    return length;
}

int main() {
    Line line(10.0);

    // 获取默认设置的长度
    cout << "Length of line : " << line.getLength() << endl;
    // 设置长度
    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;

    return 0;
}