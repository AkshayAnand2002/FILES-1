https://leetcode.com/problems/single-number/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],mp[nums[i]]++});
        }
        int ans=0;
        for(auto &it:mp){
            if(it.second==1){
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};
