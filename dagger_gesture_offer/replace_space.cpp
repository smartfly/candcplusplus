//
// Created by smartfly on 2020/6/7.
//

#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        if (s.empty()) {
            return "";
        }
        string result;
        for (auto a : s) {
            if (a == ' ') {
                result.append("%20");
            } else {
                result.push_back(a);
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string result = solution.replaceSpace("We are happy.");
    cout << result << endl;
    return 0;
}