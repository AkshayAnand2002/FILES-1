https://leetcode.com/problems/longest-common-prefix/description/
class Solution {
public:
    string findpref(string ans,string check){
        if(ans.size()>check.size()){
            swap(ans,check);
            //checking which one is of smaller size
        }
        string str="";
        for(int i=0;i<ans.size();i++){
            if(ans[i]==check[i]){
                str+=(char)ans[i];
                //if same adding in the string.
            }
            else{
                break;
            }
        }
        return str;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        //taking 1st elem
        int n=strs.size();
        for(int i=1;i<n;i++){
            ans=findpref(ans,strs[i]);
            //comparing with others to get common prefix
        }
        return ans;
    }
};
https://www.youtube.com/watch?v=8LDbrlZ7834
