https://leetcode.com/problems/top-k-frequent-elements/description/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        for(auto x:nums){
            umap[x]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto x:umap){
            pq.push(make_pair(x.second,x.first));
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>answer;
        while(!pq.empty()){
            pair<int,int>temp=pq.top();
            pq.pop();
            answer.push_back(temp.second);
        }
        return answer;
    }
};
//solved using hello world yt.
