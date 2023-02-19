https://leetcode.com/problems/remove-stones-to-minimize-the-total/description/
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(piles.begin(),piles.end());
        for(int i=0;i<k;i++){
            int temp=pq.top();
            //max element is popped by pop() and pq.top().
            pq.pop();
            pq.push(temp-(temp/2));
            //max elem is replaced by corresponding elem subtracted by its half ATQ.
        }
        int answer=0;
        while(!pq.empty()){
            //till priority queue is not empty we keep on popping the elems to get the sum.
            answer+=pq.top();
            pq.pop();
        }
        return answer;
    }
};
https://www.youtube.com/watch?v=YQMVcJdsuDU
