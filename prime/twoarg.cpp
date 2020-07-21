//
// Created by smartfly on 2020/7/13.
//

#include <iostream>

using namespace std;

void n_chars(char, int);

int main() {
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while ('q' != ch) {     // q to quit
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);     //function with two arguments
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    return 0;
}

void n_chars(char c, int n) {       //displays c n time
    while (n-- > 0)
        cout << c;
}