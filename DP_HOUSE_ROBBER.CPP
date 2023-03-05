https://leetcode.com/problems/house-robber/description/
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<1){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>dp(nums.size(),0);
        dp[0]=nums[0];
        //for 1 house
        dp[1]=max(nums[0],nums[1]);
        //above is for case of 2 houses
        //we take max of 2 houses.
        for(int i=2;i<nums.size();i++){
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
            //current house with previous to adjacent house by dp[i-2]+nums[i]
            //or adjacent house to it by dp[i-1]
        }
        return dp[nums.size()-1];
    }
};
//https://www.youtube.com/watch?v=LCtzDl1uT_U
