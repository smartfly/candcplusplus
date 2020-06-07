//
// Created by smartfly on 2020/5/27.
//

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void defineTwoDimension();

void defineTwoDimension1();

int main() {
    vector<int> obj;     // 最大容器为10, 都初始化为0
    for (int i = 0; i < 10; i++) {
        obj.push_back(i);
        cout << obj[i] << ",";
    }

    for (int i = 0; i < 5; i++) {         // 去掉数组最后一个数据
        obj.pop_back();
    }

    cout << "\n" << endl;

    for (int i : obj) {      //size()容器中实际数据个数
        cout << i << ",";
    }

    obj.clear();            //清楚容器所有数据
    cout << "\n-------------------------" << endl;
    for (int i : obj) {
        cout << i << ",";
    }

    obj.push_back(1);
    obj.push_back(3);
    obj.push_back(0);
    sort(obj.begin(), obj.end());          //从大到小
    cout << "从小到大:" << endl;
    for (int i : obj) {
        cout << i << ",";
    }
    cout << "\n" << endl;
    reverse(obj.begin(), obj.end());        //从大到小
    cout << "从大到小:" << endl;
    for (int i : obj) {
        cout << i << ",";
    }
    cout << endl;
    // 方法二 使用迭代器将容器中数据输出
    cout << "利用迭代器:" << endl;
    vector<int>::iterator it;           //声明一个迭代器,来访问vector容器,作用：遍历或者指向vector容器的元素
    for (it = obj.begin(); it != obj.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    // 二维数组定义方法1
    cout << "二维数组定义方法1:" << endl;
    defineTwoDimension();
    // 二维数组定义方法2:
    cout << "二维数组定义方法2:" << endl;
    defineTwoDimension1();
    return 0;
}

void defineTwoDimension() {
    int N = 5, M = 6;
    vector<vector<int>> obj(N);         //定义二维数组大小5行
    for (int i = 0; i < obj.size(); ++i) {              //动态二维数组为5行6列，值全为0
        obj[i].resize(M);
    }

    for (int i = 0; i < obj.size(); ++i) {      //输出二维动态数组
        for (int j = 0; j < obj[i].size(); ++j) {
            cout << obj[i][j] << " ";
        }
        cout << "\n";
    }
}

void defineTwoDimension1() {
    int N = 5, M = 6;
    vector<vector<int>> obj(N, vector<int>(M));     //定义二维动态数组5行6列
    for (int i = 0; i < obj.size(); ++i) {
        for (int j = 0; j < obj[i].size(); ++j) {
            cout << obj[i][j] <<"";
        }
        cout << endl;
    }
}