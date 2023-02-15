https://leetcode.com/problems/unique-paths/description/
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>paths(m,vector<int>(n));
        //we can also use n*m matrix but then replace m by n and vice versa.
        for(int i=0;i<n;i++){
            paths[m-1][i]=1;
            //last row
        }
        for(int j=0;j<m;j++){
            paths[j][n-1]=1;
            //last column
        }
        for(int i=m-2;i>=0;i--){ //rows
            for(int j=n-2;j>=0;j--){//columns
                paths[i][j]=paths[i][j+1]+paths[i+1][j];
                //adding right elem in the same row and the bottom elem
                //in the same column.
            }
        }
        return paths[0][0];
    }
};
//https://www.youtube.com/watch?v=-fS1pS1mxQc
