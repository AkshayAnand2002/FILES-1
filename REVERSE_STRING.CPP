https://leetcode.com/problems/reverse-string/description/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0,right=s.size()-1;
        while(left<right){
            swap(s[left++],s[right--]);
        }
    }
};
/*
two pointers for starting and ending index of the string and we swap them until 
we are at the middle of the string or we can say left poiner is less than right pointer.
*/
