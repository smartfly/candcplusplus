//
// Created by smartfly on 2020/5/27.
//
#include <iostream>
#include <map>

using namespace std;

//比较函数(用于后面的函数指针定义)
bool fncomp(char lhs, char rhs) {
    return lhs < rhs;
}

//定义一个Compare对象,且内部对运算符()进行重载
struct classcomp {
    bool operator()(const char &lhs, const char &rhs) {
        return lhs < rhs;
    }
};

int main() {
    //===================
    // map多种构造函数
    //====================

    //1.直接定义
    map<char, int> mymap;
    mymap['a'] = 10;
    mymap['b'] = 60;
    mymap['c'] = 30;
    mymap['d'] = 90;
    mymap['c'] = 50;

    //2.复制
    map<char, int> second(mymap);

    //3.通过迭代器
    map<char, int> third(mymap.begin(), mymap.end());

    //4.重新定义Compare对象,该对象内部对运算符()进行重载
    map<char, int, classcomp> fourth;

    //5.通过指针
    bool (*fn_pt)(char, char) = fncomp;
    map<char, int, bool (*)(char, char)> fifth(fn_pt);

    map<char, int>::key_compare key_comp;
    map<char, int>::iterator it;
    it = mymap.begin();

    //===================
    // 输出所有Pair元素
    //====================
    //迭代器遍历map
    for (it; it != mymap.end(); it++) {
        //map的迭代器，可以用first访问std::pair的第一个成员(Type1), second访问第二个成员(Type2)
        cout << it->first << ":" << it->second << endl;
    }
    cout << "=================================" << endl;

    //===================
    // 修改映射值
    //====================
    second.clear();
    second['a'] = 1002;
    second['b'] = 10023;
    while (!second.empty()) {
        cout << second.begin()->first << "=>";
        cout << second.begin()->second << endl;
        second.erase(second.begin());
    }
    cout << "=================================" << endl;

    //===================
    // 插入
    //====================
    mymap.insert(pair<char, int>('f', 200));
    mymap.insert(pair<char, int>('g', 100));
    cout << "f => " << mymap.find('f')->second << endl;
    cout << "g => " << mymap.find('g')->second << endl;
    cout << "=================================" << endl;

    //===================
    // Compare参数的使用
    //====================
    key_comp = mymap.key_comp();
    cout << "mymap contains:" << endl;

    //迭代器反向遍历的起始位置
    char highest = mymap.rbegin()->first;       //key value of last element
    it = mymap.begin();
    do {
        cout << (*it).first << "=>" << (*it).second << endl;
    } while (key_comp((*it++).first, highest));

    cout << endl;
}