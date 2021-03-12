/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int thisSum = 0;
        int MaxSum = nums[0];
        for (int i = 0; i < nums.size();++i)
        {
            thisSum += nums[i];

            if (thisSum >= MaxSum)
            {
                MaxSum = thisSum;
            }
            if (thisSum < 0)
            {
                thisSum = 0;
            }
            
        }
        return MaxSum;
    }
};
// @lc code=end

