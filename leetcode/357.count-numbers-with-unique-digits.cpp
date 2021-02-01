/*
 * @lc app=leetcode id=357 lang=cpp
 *
 * [357] Count Numbers with Unique Digits
 */

// @lc code=start
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) {
            return 1;
        }

        if (n == 1) {
            return 10;
        }

        int ans = 10;
        int base = 9;
        for(int i = 2; i <= n; ++i) {
            base = base * (9 - i + 2);
            ans += base;
        }

        return ans;
    }
};
// @lc code=end
