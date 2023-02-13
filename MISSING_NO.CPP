https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Set Approach
        int ans = 0;
        int n = nums.size();
        unordered_set<int> mySet;
        for(int i=0; i<n; i++){
            mySet.insert(nums[i]);
        }
        for(int i=0; i<=n; i++){
            if(mySet.find(i) == mySet.end()){
                //returns no. not present in the set.
                ans = i;
            }
        }
        return ans;
    }
};
