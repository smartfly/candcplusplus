//
// Created by taohu on 2020/4/6.
//
#include <iostream>

using namespace std;

class BoxFriend {
    double width;
public:
    friend void printWidth(BoxFriend boxFriend);

    void setWidth(double wid);
};

// 成员函数定义
void BoxFriend::setWidth(double wid) {
    width = wid;
}

// 请注意: printWidth() 不是任何类的成员函数
void printWidth(BoxFriend boxFriend) {
    /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
    cout << "Width of box : " << boxFriend.width << endl;
}

int main() {
    BoxFriend boxFriend;

    // 使用成员函数设置宽度
    boxFriend.setWidth(10.0);

    // 使用友元函数输出宽度
    printWidth(boxFriend);

    return 0;
}