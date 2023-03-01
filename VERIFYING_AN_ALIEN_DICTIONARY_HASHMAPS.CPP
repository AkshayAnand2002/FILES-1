https://leetcode.com/problems/verifying-an-alien-dictionary/description/
https://www.youtube.com/watch?v=agfs69pIWHA
class Solution {
public:
    unordered_map<char,int>mp;
    bool correctorder(string a,string b){
        int n=min(a.size(),b.size());
        for(int i=0;i<n;i++){
            if(mp[a[i]]<mp[b[i]]){
                return true;
            }
            else if(mp[a[i]]>mp[b[i]]){
                return false;
            }
        }
        //checking b is substring of a or not.
        if(a.size()>b.size() && (a.find(b) !=string::npos)){
            return false;
            //smaller size substring should come on left.
        }
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        //map stores indexes.
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++){
            if(!correctorder(words[i],words[i+1])){
                return false;
            }
        }
        return true;
    }
};
