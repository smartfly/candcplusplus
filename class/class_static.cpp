//
// Created by taohu on 2020/4/6.
//

#include <iostream>

using namespace std;

class BoxStatic {
public:
    static int objectCount;
    // 构造函数定义
    BoxStatic(double l=2.0, double b=2.0, double h=2.0) {
        cout <<"Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        // 每次创建对象时增加 1
        objectCount++;
    }
    double Volume()
    {
        return length * breadth * height;
    }
private:
    double length;     // 长度
    double breadth;    // 宽度
    double height;     // 高度
};

// 初始化类Box的静态成员
int BoxStatic::objectCount = 0;

int main() {
    BoxStatic boxStatic1(3.3, 1.2, 1.5); // 声明box1
    BoxStatic boxStatic2(8.5, 6.0, 2.0); // 声明box2

    // 输出对象的总数
    cout << "Total objects: " << BoxStatic::objectCount << endl;

    return 0;
}