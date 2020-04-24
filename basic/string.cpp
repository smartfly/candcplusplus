//
// Created by taohu on 2020/4/4.
//

#include <iostream>
#include <cstring>

using namespace std;

void printG() {
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "Greeting message: ";
    cout << greeting << endl;
}

void stringByC() {
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int len;

    // 复制 str1 到 str2
    strcpy(str3, str1);
    cout << "strcpy( str3, str1 ) : " << str3 << endl;

    // 连接 str1 和 str2
    strcat(str1, str2);
    cout << "strcat( str1, str2 ) : " << str1 << endl;

    // 连接后, str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
}


void stringByCPlus() {
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    // 复制 str1 到 str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;
    // 连接 str1 和 str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;
    // 连接后， str3的总长度
    len = str3.size();
    cout << "str1.size() : " << len << endl;
}

int main() {
    printG();
    stringByC();
    stringByCPlus();
    return 0;
}

