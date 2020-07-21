//
// Created by smartfly on 2020/7/14.
//

#include <iostream>

unsigned int c_in_str(const char *str, char ch);

int main() {
    using namespace std;
    char mmm[15] = "minimum";       // string in an array some system require preceding char with static to enable
    // array initialization

    char *wail = "ululate";         //wail points to string
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m character in " << mmm << endl;
    cout << us << " u character in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char *str, char ch) {
    unsigned int count = 0;
    while (*str) {
        if (*str == ch) {       //quit when *str is '\0'
            count++;
        }
        str++;          // move pointer to next char
    }
    return count;
}