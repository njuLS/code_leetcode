/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int m = 0;

        while (x)
        {
            if (m > (__INT32_MAX__) / 10 | m < -__INT32_MAX__ / 10)
            {
                return 0;
            }
            m = 10 * m + x % 10;
            x /= 10;
        }
        return m;
    }
};
// @lc code=end
