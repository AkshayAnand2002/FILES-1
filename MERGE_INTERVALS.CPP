https://leetcode.com/problems/merge-intervals/description/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size()==0){
            return res;
        }      
        
        sort(intervals.begin(), intervals.end(),[](vector<int> &a, vector<int> &b){
            return a[0] < b[0];
        });
        //sorting by comparing the starting values i.e. 0th indices.
        vector<int> curr=intervals[0];
        //storing starting index in curr.
        for(int i=1;i<intervals.size();i++){
            if(curr[1]<intervals[i][0]){
                res.push_back(curr);
                curr=intervals[i];
                //no overlapping of end and start time.
            }else{
                curr[1]=max(curr[1], intervals[i][1]);
                //overlapping occurs.
            }
        }
        //final result.
        res.push_back(curr);
        return res;
    }
};
https://www.youtube.com/watch?v=EnCh0tLzfGQ
