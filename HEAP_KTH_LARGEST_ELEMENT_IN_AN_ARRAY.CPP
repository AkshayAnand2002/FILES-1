https://leetcode.com/problems/kth-largest-element-in-an-array/description/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        //min heap
        for(auto x:nums){
            pq.push(x);
            if(pq.size()>k){
                pq.pop();
                //in min heap root element is always smallest
                //so the smallest elemenet is popped
                //and atlast we get required element.
            }
        }
        return pq.top();
        //getting required element.
    }
};
