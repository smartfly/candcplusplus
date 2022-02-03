//
// Created by taohu on 2022/2/3.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;    // 保存结果
        unordered_map<char, int> need, window;
        for (char c: p) {
            need[c]++;
        }
        int left = 0, right = 0;
        int valid = 0;
        while (right < s.size()) {
            char c = s[right];
            right++;
            // 窗口扩大一系列操作
            if (need.count(c)) {
                window[c]++;
                if (need[c] == window[c]) {
                    valid++;
                }
            }
            // 窗口缩小的条件
            while (right - left >= p.size()) {
                // 判断是否找到异位词
                if (valid == need.size()) {
                    res.push_back(left);
                }
                // 窗口缩小一些列操作
                char d = s[left];
                left++;
                if (need.count(d)) {
                    if (window[d] == need[d]) {
                        valid--;
                    }
                    window[d]--;
                }
            }
        }
        return res;
    }
};

int main() {
    cout << "Hell World" << endl;
    Solution s;
    vector<int> a = s.findAnagrams("cbaebabacd", "abc");
    cout << a.size() << endl;
    return 0;
}