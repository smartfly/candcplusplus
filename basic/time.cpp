//
// Created by taohu on 2020/4/6.
//
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "-------Get Current Date & Time-------" << endl;
    // 基于当前系统的当前日期/时间
    time_t now = time(0);

    // 把now转换为字符串形式
    char *dt = ctime(&now);

    cout << "local date & time: " << dt << endl;

    // 把 now转换为tm结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC date & time: " << dt << endl;

    cout << "--------format time--------" << endl;
    cout << "1970-01-01 timestamp: " << now << endl;

    tm *ltm = localtime(&now);

    // 输出 tm 结构的各个组成部分
    cout << "year: " << 1900 + ltm->tm_year << endl;
    cout << "month: " << 1 + ltm->tm_mon << endl;
    cout << "day: " << 1 + ltm->tm_mday << endl;
    cout << "time: " << 1 + ltm->tm_hour << ":";
    cout <<  1 + ltm->tm_min << ":";
    cout <<  1 + ltm->tm_sec << endl;


    return 0;
}

