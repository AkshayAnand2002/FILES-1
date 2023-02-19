https://leetcode.com/contest/weekly-contest-333/problems/merge-two-2d-arrays-by-summing-values/
class Solution{
    public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2){
        map<int,int>ump;
        vector<vector<int>>answer;
        for(auto x:nums1){
            ump[x[0]]+=x[1];
        }
        for(auto x:nums2){
            ump[x[0]]+=x[1];
        }
        for(auto x:ump){
            answer.push_back({x.first,x.second});
            //pushing sums acc to cases...
        }
        return answer;
    }
};
