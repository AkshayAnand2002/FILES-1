https://leetcode.com/problems/subsets/description/
class Solution {
public:
    vector<vector<int>>answer;
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++){ //pow(2,n) can also be written as (1<<n)
            vector<int> v;
            for(int j=0;j<n;j++){
                if((1<<j)&i){
                    //important approach
                    v.push_back(nums[j]);
                }
            }
            answer.push_back(v);
        }
        return answer;
    }
};
//https://www.youtube.com/watch?v=h4zNvA4lbtc
