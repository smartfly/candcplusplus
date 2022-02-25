//
// Created by smartfly on 2022/2/25.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int trap(vector<int> &height) {
        int left = 0, right = height.size() - 1;
        int l_max = 0, r_max = 0;
        int res = 0;
        while (left < right) {
            l_max = max(l_max, height[left]);
            r_max = max(r_max, height[right]);
            // res += min(l_max, r_max) - height[i]
            if (l_max < r_max) {
                res += l_max - height[left];
                left++;
            } else {
                res += r_max - height[right];
                right--;
            }
        }
        return res;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}