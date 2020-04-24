//
// Created by taohu on 2020/4/6.
//

#include <iostream>

using namespace std;

class BoxFunc {
public:
    double length;         // 长度
    double breadth;        // 宽度
    double height;         // 高度

    // 成员函数声明
    double getVolume(void);

    void setLength(double len);

    void setBreadth(double bre);

    void setHeight(double hei);
};

// 成员函数定义
double BoxFunc::getVolume(void) {
    return length * breadth * height;
}

void BoxFunc::setLength(double len) {
    length = len;
}

void BoxFunc::setBreadth(double bre) {
    breadth = bre;
}

void BoxFunc::setHeight(double hei) {
    height = hei;
}

int main() {
    BoxFunc Box1;                // 声明 Box1，类型为 Box
    BoxFunc Box2;                // 声明 Box2，类型为 Box
    double volume = 0.0;     // 用于存储体积

    // box 1 详述
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // box 2 详述
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // box 1 的体积
    volume = Box1.getVolume();
    cout << "Box1 volume: " << volume << endl;

    // box 2 的体积
    volume = Box2.getVolume();
    cout << "Box2 volume: " << volume << endl;
    return 0;
}