https://leetcode.com/contest/weekly-contest-334/problems/left-and-right-sum-differences/
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftsum(n,0);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                leftsum[i]+=nums[j];
            }
            leftsum.push_back(leftsum[i]);
        }
        vector<int>rightsum(n,0);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                rightsum[i]+=nums[j];
            }
            rightsum.push_back(rightsum[i]);
        }
        vector<int>req;
        for(int k=0;k<n;k++){
            req.push_back(abs(leftsum[k]-rightsum[k]));
        }
        return req;
    }
};
