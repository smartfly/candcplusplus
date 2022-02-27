//
// Created by smartfly on 2022/2/26.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int> &nums) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1]) {
                right = mid;
            } else  {
                left = mid + 1;
            }
        }
        return left;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}