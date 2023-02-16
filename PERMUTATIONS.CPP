https://leetcode.com/problems/permutations/description/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()<=1){
            return {nums};
        }//base case
        vector<vector<int>>result;
        for(int i=0;i<nums.size();i++){
            vector<int>v(nums.begin(),nums.end());
            v.erase(v.begin()+i);
            //deleting char at ith position
            auto res=permute(v); //denotes permutation of vectors with 1 digit less.
            for(int j=0;j<res.size();j++){
                vector<int> _v=res[j];
                //adding deleted digit at the beginning.
                _v.insert(_v.begin(),nums[i]);
                result.push_back(_v);
            }
        }
        return result;
    }
};
//https://www.youtube.com/watch?v=1Rox5gt51b0
