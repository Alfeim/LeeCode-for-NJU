/********************************************
作者:Alfeim
题目:搜索旋转排序数组
时间消耗:4ms
解题思路:没啥好说的..可递归可动态规划(记忆化)..
********************************************/
class Solution {
public:
    int fib(int N) {
        vector<int> dp(31,0);
        dp[1] = 1;
        dp[2] = 1;
        for(int i = 3 ; i <= N ; i++) dp[i] = dp[i-1] + dp[i-2];
        return dp[N];
    }
};
