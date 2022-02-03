//
// Created by taohu on 2022/2/3.
//

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> window;
        int left = 0, right = 0;
        int res = 0; //记录结果
        while (right < s.size()) {
            char c = s[right];
            right++;
            // 进行窗口内数据的一些列更新
            window[c]++;
            // 判断左侧窗口是否要收缩
            while (window[c] > 1) {
                char d = s[left];
                left++;
                // 进行窗口内数据的一些列更新
                window[d]--;
            }
            // 在这里更新答案
            res = max(res, right - left);
        }
        return res;
    }
};

int main() {
    cout << "Hell World" << endl;
    return 0;
}