https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i=0;i<haystack.size();i++){
            int j=0;
            int index=i;
            while(j<needle.size() && haystack[index] == needle[j]){
                j++;
                index++;
                //j actually measures needle size.
                //i actually stores the starting position of string.
            }
            if(j==needle.size()){
                return i;
                //starting position of string...
            }
        }
        return -1;
    }
};
