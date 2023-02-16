https://leetcode.com/problems/group-anagrams/description/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        map<string,vector<string>>mp;
        int n=strs.size();
        string temp;
        for(int i=0;i<n;i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
            //taking key of map as sorted string
            //and pushing back key having the same characters as values.
        }
        for(auto it:mp){
            res.push_back(it.second);
            //pushing values in vectors.
        }
        return res;
    }
};
-----------------------------------------------------------------------------------------
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;//answer must be vector of string vectors.
        unordered_map<string,vector<string>>umap;//string mapped with string vectors
        for(auto x:strs){
            string temp=x;
            sort(x.begin(),x.end());//sorting strings in strs
            umap[x].push_back(temp);
            //key is the sorted string and corresponding stored values in map
            //is strings of which the key is the sorted array.
        }
        for(auto x:umap){
            vector<string>temp2 = x.second;
            //in temp2 storing values of map or second values.
            answer.push_back(temp2);
            //pushing grouped anagrams in answer.
        }
        return answer;
    }
};
