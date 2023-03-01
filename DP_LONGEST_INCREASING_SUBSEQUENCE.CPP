https://www.youtube.com/watch?v=EsgaVYo9McI
https://leetcode.com/problems/longest-increasing-subsequence/description/
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int answer=1,n=nums.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=(i-1);j>=0;j--){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                    //since we found a smaller no we add 1 to the no
                    //no stored in previous found index location.
                    answer=max(answer,dp[i]);
                }
            }
        }
        return answer;
    }
};
