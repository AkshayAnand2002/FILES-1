https://leetcode.com/problems/set-matrix-zeroes/submissions/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>x,y;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        //below making required row =0.
        for(int i=0;i<x.size();i++){
            int index=x[i];
            for(int j=0;j<n;j++){
                matrix[index][j]=0;
            }
        }
        //below making required column =0.
        for(int j=0;j<y.size();j++){
            int index=y[j];
            for(int j=0;j<m;j++){
                matrix[j][index]=0;
            }
        }
    }
};
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int rows=matrix.size();
//         int columns=matrix[0].size();
//         vector<pair<int,int>>answer;
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<columns;j++){
//                 if(matrix[i][j]==0){
//                     answer.push_back({i,j});
//                 }
//             }
//         }
//         for(int i=0;i<answer.size();i++){
//             int rowindex=answer[i].first;
//             int colindex=answer[i].second;
//             int row=0;
//             int col=0;
//             while(col<columns){
//                 matrix[rowindex][col++]=0;
//             }
//             while(row<rows){
//                 matrix[row++][colindex]=0;
//             }
            
//         }
//     }
// };
//https://www.youtube.com/watch?v=W6La6f7POk0
