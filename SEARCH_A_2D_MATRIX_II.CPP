https://leetcode.com/problems/search-a-2d-matrix-ii/description/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,column=matrix[0].size()-1;//last column is the starting.
        while(row<matrix.size() && column>=0){
            if(matrix[row][column]==target){
                return true;
            }
            if(matrix[row][column] < target){
                ++row;
            }
            else{
                --column;
            }
        }
        return false;
    }
};
