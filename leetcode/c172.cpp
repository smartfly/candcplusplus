//
// Created by smartfly on 2022/2/27.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        long divisor = 5;
        while (divisor <= n) {
            res += n / divisor;
            divisor *= 5;
        }
        return res;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}