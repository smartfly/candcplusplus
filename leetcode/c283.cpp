//
// Created by smartfly on 2022/2/26.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int index = removeElement(nums, 0);
        for (int i = index; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }

    int removeElement(vector<int> &nums, int val) {
        int fast = 0, slow = 0;
        while (fast < nums.size()) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}