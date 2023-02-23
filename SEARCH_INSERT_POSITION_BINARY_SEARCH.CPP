https://leetcode.com/problems/search-insert-position/description/
class Solution {
public:
    int binarySearch(vector<int>&nums,int start,int end,int target){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>=target){
                end=mid-1;
            }
        }
        return start;
        //start gives actual or tentative position if elem present and not present resp.
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);
    }
};
