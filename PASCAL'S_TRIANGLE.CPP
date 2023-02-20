https://leetcode.com/problems/pascals-triangle/description/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>answer;
        for(int i=0;i<numRows;i++){
            vector<int>v(i+1,1);
            //ith row has i+1 elements and by default as 1.
            for(int j=1;j<i;j++){
                v[j]=answer[i-1][j-1]+answer[i-1][j];
            }
            answer.push_back(v);
            //previous rows current index and the one previous to it.
        }
        return answer;
    }
};
//https://www.youtube.com/watch?v=Q1lj9B33Euc
