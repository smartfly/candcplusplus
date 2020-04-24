//
// Created by taohu on 2020/4/4.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int i, j;

    // 设置种子
    srand((unsigned) time(NULL));

    /*生成10个随机数*/
    for(i = 0; i < 10; i++)
    {
        // 生成实际的随机数
        j = rand();
        cout << "random num: " << j << endl;
    }
    return 0;
}
