https://leetcode.com/problems/kth-largest-element-in-a-stream/description/
class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int globalk;
    KthLargest(int k, vector<int>& nums) {
        globalk=k;
        //variable to store k value.
        for(auto x:nums){
            pq.push(x);
            if(pq.size()>k){
                pq.pop();
                //maintaining size of priority queue.
            }
        }
    }
    int add(int val) {
        pq.push(val);
        //new value pushed in priority queue
        if(pq.size()>globalk){
            pq.pop();
            //since this function does not have access to the k value.
            //we used globalk to do that.
        }
        return pq.top();
        //we used minheap so top represents the kth largest element. 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
