https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low+1 < nums.size() && nums[low] <= nums[low+1]){
            low++;
        }
        while(high-1>=0 && nums[high-1]<= nums[high]){
            high--;
        }
        if(low==nums.size()-1){
            return 0;
        }
        int wmin=INT_MAX,wmax=INT_MIN;
        for(int i=low;i<=high;i++){
            wmin=min(wmin,nums[i]);
            wmax=max(wmax,nums[i]);
        }
        while(low-1>=0 && nums[low-1]>wmin){
            low--;
        }
        while(high+1<=nums.size()-1 && nums[high+1]<wmax){
            high++;
        }
        return high-low+1;
    }
};
//https://www.youtube.com/watch?v=ho9x_C2akHg
