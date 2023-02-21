https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1,mp2;
        for(auto x:nums1){
            mp1[x]++;
        }
        for(auto x:nums2){
            mp2[x]++;
        }
        vector<int>answer;
        for(auto x:mp1){
            if(mp2[x.first]){
                int count=min(x.second,mp2[x.first]);
                //if 2 is present 3 times in map1 and 10 times in map2
                //then we must add 3 times in answer which is minimum of (3,10).
                while(count--){
                    answer.push_back(x.first);
                    //added no. of times in answer vector.
                }
            }
        }
        return answer;
    }
};
