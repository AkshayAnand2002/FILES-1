https://leetcode.com/problems/assign-cookies/description/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // sort(g.rbegin(),g.rend());
        // sort(s.rbegin(),s.rend());
        //reversal operation ways of doing reversal.
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int current=0;
        int total=0;
        int m=s.size();//size of array of cokkies size.
        int n=g.size();
        //size of array of greed factor.
        for(int i=0;i<n;i++){
            //in greed factor array.
            if(current<m && g[i]<=s[current]){
        //checking in array of cookie sizes and also checking greed factor lesser than cookie size.
                total++;
                current++;
            }
        }
        return total;
    }
};
//https://www.youtube.com/watch?v=2oZD3GfboFo
