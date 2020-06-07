//
// Created by smartfly on 2020/6/7.
//

#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int> &nums) {
        unordered_map<int, bool> recordMap;
        for (int i : nums) {
            if (recordMap.find(i) != recordMap.end()) {
                return i;
            }
            recordMap[i] = true;
        }
        return 0;
    }
};

int main() {
    Solution solution;
    vector<int> obj = {2, 3, 1, 0, 2, 5, 3};
    int result = solution.findRepeatNumber(obj);
    cout << result << endl;
    return 0;
}