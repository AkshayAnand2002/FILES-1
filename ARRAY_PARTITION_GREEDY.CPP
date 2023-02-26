https://leetcode.com/problems/array-partition/description/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int max=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2){
            max+=nums[i];
        }
        return max;
    }
};
/*
first we have sorted the array in ascending order.
now in for loop we incremented i by i=i+2 mean it will pick the smaller value ( or we can say minimum value of consecutuve 2)
then in max=max+nums[i];
e.g-
int sum=0
[4,10,5,3,2,8]
applying sorting:
[2,3,4,5,8,10]
output will be sum=sum+2+4+8=14.
*/
