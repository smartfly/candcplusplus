//
// Created by taohu on 2020/4/6.
//
#include <iostream>

using namespace std;
const int MAX = 3;

int main() {
    int var1;
    char var2[10];
    cout << "--------variable address--------" << endl;
    cout << "var1 address:r ";
    cout << &var1 << endl;

    cout << "var2 address: ";
    cout << &var2 << endl;

    cout << "---------variable&ptr---------" << endl;
    int var = 20;       // 实际变量的声明
    int *ip;            // 指针变量的声明

    ip = &var;          // 在指针变量中存储var的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
    cout << "----------NULL ptr--------" << endl;
    // 空指针
    int *ptr = NULL;
    cout << "Value of ptr: " << ptr << endl;

    cout << "--------ptr plus----------" << endl;
    // 指针的算术运算
    int varArray[MAX] = {10, 100, 200};
    int *ptrArray;

    // 指针中的数组地址
    ptrArray = varArray;
    for (int i = 0; i < MAX; i++) {
        cout << "Address of var[" << i << "] = ";
        cout << ptrArray << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptrArray << endl;
        // 移动到下一个位置
        ptrArray++;
    }
    cout << "--------ptr sub----------" << endl;
    // 指针中最后一个元素的地址
    ptrArray = &varArray[MAX - 1];
    for (int i = MAX; i > 0; i--) {
        cout << "Address of var[" << i << "] = ";
        cout << ptrArray << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptrArray << endl;
        // 移动到下一个位置
        ptrArray--;
    }
    cout << "--------ptr compare----------" << endl;
    // 指针中第一个元素的地址
    ptrArray = varArray;
    int i = 0;
    while (ptrArray <= &varArray[MAX - 1]) {
        cout << "Address of var[" << i << "] = ";
        cout << ptrArray << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptrArray << endl;
        // 指向上一个位置
        ptrArray++;
        i++;
    }

    cout << "--------ptr & array----------" << endl;
    // 指针中的数组地址
    ptrArray = varArray;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptrArray << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptrArray << endl;

        // 移动到下一个位置
        ptrArray++;
    }

    for (int i = 0; i < MAX; i++) {
        *(varArray + i) = i;    // 这是正确的语法
        // varArray++;       // 这是不正确的
        cout << "value of var[" << i << "] = ";
        cout << varArray[i] << endl;
    }

    // 指针数组
    cout << "--------ptrArray----------" << endl;
    const char *names[MAX] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
    };

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << names[i] << endl;
    }

    // 指向指针的指针
    cout << "--------**ptr----------" << endl;
    int  a;
    int  *ptra;
    int  **pptra;
    a = 3000;

    // 获取 var 的地址
    ptra = &a;

    // 使用运算符 & 获取 ptr 的地址
    pptra = &ptra;

    // 使用 pptra 获取值
    cout << "Value of a :" << a << endl;
    cout << "Value available at *ptra :" << *ptra << endl;
    cout << "Value available at **pptra :" << **pptra << endl;
    return 0;
}