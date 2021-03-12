/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
#include <iostream>
using namespace std;


class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0;
        while (x != 0 || y != 0)
        {
            if (x%2 != y%2)
            {
                cnt++;
            }
            x /= 2;
            y /= 2;
        }
        return cnt;
    }

};
// @lc code=end

