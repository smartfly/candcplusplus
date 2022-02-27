//
// Created by smartfly on 2022/2/26.
//

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        return ((n & (n - 1)) == 0);
    }
};

int main() {
    cout << "Hello World!" << endl;
    Solution s;
    bool res = s.isPowerOfTwo(1);
    cout << res << endl;
    return 0;
}