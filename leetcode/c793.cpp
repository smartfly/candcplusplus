//
// Created by smartfly on 2022/2/27.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int preimageSizeFZF(int k) {
        return (int) (right_bound(k) - left_bound(k) + 1);
    }

    // 阶乘尾部零个数
    long long trailingZeroes(long long n) {
        long long res = 0;
        for (long long d = n; d / 5 > 0; d = d / 5) {
            res += d / 5;
        }
        return res;
    }

    // left_bound
    long long left_bound(int target) {
        long long low = 0, high = LONG_LONG_MAX;
        while (low < high) {
            long long mid = low + (high - low) / 2;
            if (trailingZeroes(mid) < target) {
                low = mid + 1;
            } else if (trailingZeroes(mid) > target) {
                high = mid;
            } else {
                high = mid;
            }
        }
        return low;
    }

    // right_bound
    long long right_bound(int target) {
        long long low = 0, high = LONG_LONG_MAX;
        while (low < high) {
            long long mid = low + (high - low) / 2;
            if (trailingZeroes(mid) < target) {
                low = mid + 1;
            } else if (trailingZeroes(mid) > target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low - 1;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}