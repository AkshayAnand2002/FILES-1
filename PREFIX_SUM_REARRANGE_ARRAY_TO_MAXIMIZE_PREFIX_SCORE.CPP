https://leetcode.com/contest/weekly-contest-336/problems/rearrange-array-to-maximize-prefix-score/
class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        //descending order
        int no=nums.size();
        vector<long long>prefix(no);
        int answer=0;
        prefix[0]=nums[0];
        if(prefix[0]>0){
            answer++;
        }
        //checking 1st elem
        //then next elem
        for(int i=1;i<no;i++){
            prefix[i]=prefix[i-1]+nums[i];
            if(prefix[i]>0){
                answer++;
            }
            //returning count
        }
        return answer;
    }
};
