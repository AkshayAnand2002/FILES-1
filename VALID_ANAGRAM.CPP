https://leetcode.com/problems/valid-anagram/description/
class Solution {
public:
    //  bool isAnagram(string s, string t) {
    //     sort(begin(s),end(s));
    //     sort(begin(t),end(t));
    //    return s==t;
    // }
     bool isAnagram(string s, string t) {
        vector<int>mp(26,0),mp2(26,0);
        if(s.size()>t.size())return false;
        for(auto x:s)mp[x-'a']++;
        for(auto x:t){
            if(mp[x-'a']<=0){
                return false;
            }
            mp[x-'a']--;
        }
        return true;
    }
};
