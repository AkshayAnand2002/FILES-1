https://leetcode.com/problems/min-cost-climbing-stairs/description/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[1001];
        dp[0]=cost[0];
        dp[1]=cost[1];
        int n=cost.size();
        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
        //2 options jump from last and last-second staircase.
    }
};
//https://www.youtube.com/watch?v=a5uTA1kJsa4
