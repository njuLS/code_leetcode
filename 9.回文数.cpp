/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        else
        {
            if (x == Palindrome(x))
            {
                return true;
            }
        }
        return false;
    }
    long long Palindrome(int x){
        long long s = 0;
        while (x)
        {
            s = s * 10 + x % 10;
            x /= 10;
        }
        return s;
    }
};
// @lc code=end

