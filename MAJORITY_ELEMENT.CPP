https://leetcode.com/problems/majority-element/description/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp.insert({nums[i],mp[nums[i]]++});
        }
        for(auto & it:mp){
            if(it.second>n/2){
                    ans=it.first;
            }
        }
        return ans;
    }
};
