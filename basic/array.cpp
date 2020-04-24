//
// Created by taohu on 2020/4/4.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // n 是一个包含10个整数的数组
    int n[10];

    // 初始化数组元素
    for (int i = 0; i < 10; i++) {
        n[i] = i + 100;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    // 输出数组中每个元素的值
    for (int j = 0; j < 10; j++) {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }

    return 0;
}
