https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        if(n==1){
            return 0;
            //nothing to add to increase length so cost =0.
        }
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        //Using greater here means that lower values are considered of higher priority 
        //and come out of the priority queue earlier. By default less is used, and 
        //higher values are higher priority.
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            //pushing and popping in priority queues take log n time.
        }
        long long answer=0;
        while(pq.size()>1){
            long long x = pq.top();
            pq.pop();
            //getting 1st min at any moment.
            long long y=pq.top();
            pq.pop();
            //getting 2nd min at any moment.
            answer+=(x+y);
            pq.push(x+y);
        }
        return answer;
    }
};
https://www.youtube.com/watch?v=2pH6E9th0EY&list=PLDdcY4olLQk3cAxZPJXMbxqrM3PlNkmO8&index=18
