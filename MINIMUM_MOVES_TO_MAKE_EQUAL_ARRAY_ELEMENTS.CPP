https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int min_elem=nums[0];
        int answer=0;
        for(int i=n-1;i>=0;i--){
            answer+=(nums[i]-min_elem);
        }
        return answer;
    }
};
/*
Sort the array.
Take the minimum number from the sorted array.
Traverse the vector from right and subtract the minimum number from all the elements in the array.
The summation of the difference taken is the required answer.
*/
