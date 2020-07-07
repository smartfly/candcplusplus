//
// Created by smartfly on 2020/6/16.
//

#include <bitset>
#include <string>
#include <iostream>

int main()
{
    std::string bit_string = "110010";
    std::bitset<8> b1(bit_string);             // [0, 0, 1, 1, 0, 0, 1, 0]

    // string from position 2 till end
    std::bitset<8> b2(bit_string, 2);      // [0, 0, 0, 0, 0, 0, 1, 0]


    // string from position 2 till next 3 positions
    std::bitset<8> b3(bit_string, 2, 3);   // [0, 0, 0, 0, 0, 0, 0, 1]

    std::cout << b1 << '\n' << b2 << '\n' << b3 << '\n'<< '\n';

    return 0;
}