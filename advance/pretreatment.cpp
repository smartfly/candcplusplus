//
// Created by taohu on 2020/4/10.
//
#include <iostream>

using namespace std;

#define MIN(a, b) (((a) < (b)) ? a : b)

# define DEBUG

int main() {
    int i, j;
    i = 100;
    j = 30;

#ifdef DEBUG
    cerr << "Trace:  Inside main function" << endl;
#endif

#if 0
    /*这是注释部分*/
    cout << MKSTR(HELLO C++) << endl;
#endif

    cout << "The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
    cerr << "Trace:  Coming out of main function" << endl;
#endif

    return 0;
}