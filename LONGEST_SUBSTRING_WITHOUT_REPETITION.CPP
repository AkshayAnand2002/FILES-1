https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count[256]={0};
        int l=0;
        int r=0;
        int ans=0;
        while(r<s.length()){
            count[s[r]]++;
            while(count[s[r]]>1){
                count[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
https://www.youtube.com/watch?v=dvXyTOYVxB8
