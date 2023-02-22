https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int mini= -1; int maxi =-1;
        // start pos of target
        int low=0; int high= nums.size()-1;
        while (low<= high){
            int mid= low+ (high-low)/2;
            if (nums[mid]>=target){
                high= mid-1;
                if (nums[mid]== target)mini= mid;
            }
            else{
                low= mid+1;
            }
        }
        // search for last pos of target
        low=0; high= nums.size()-1;
        while (low<= high){
            int mid= low+ (high-low)/2;
            if (nums[mid]<= target){
                low= mid+1;
                if (nums[mid]== target)maxi= mid;
            }
            else{
                high= mid-1;
            }
        }
        return {mini,maxi};
    }
};
