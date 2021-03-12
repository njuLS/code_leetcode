/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
#include <iostream>
#include <string>
//#include <vector>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        //int sum = 0;
        int flag = 0;
        string tmp;
        string result;
        int i = a.size() - 1;
        int j = b.size() - 1;
        while (i>=0 || j>=0 || flag)
        {
            int res = flag;
            if (i>=0)
            {
                res += a[i--] - '0';
            }
            if (j>=0)
            {
                res += b[j--] - '0';
            }
            flag = res / 2;
            tmp.push_back(res % 2 + '0');
        }
        for (int i = tmp.size() - 1; i >= 0; --i)
        {
            result.push_back(tmp[i]);
        }
        return result;
    }
};
#if 0
int main()
{
    Solution s;
    string r;
    r = s.addBinary("11", "1");
    cout << r << endl;
}
#endif
// @lc code=end

