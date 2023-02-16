https://leetcode.com/problems/rotate-image/description/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
//https://www.youtube.com/watch?v=lqS5TKzcE-4
-------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            //transposing above.

        }
        //we get here
        // 1 4 7
        // 2 5 8
        // 3 6 9
        for(int i=0;i<rows;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        //reversing rows to get final answer.
    }
};
