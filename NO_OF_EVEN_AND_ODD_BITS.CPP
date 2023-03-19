https://leetcode.com/contest/weekly-contest-337/problems/number-of-even-and-odd-bits/
class Solution {
public:
    vector<int> evenOddBit(int n) {
        int t=n;
        string s="";
        while(t>0){
            int p=(t%2);
            //17
            //1
            //0
            //0
            //0
            //1
            //--------------------------------
            //2
            //0
            //1
            s=to_string(p)+s;
            t=t/2;
            //1+""
            //10+''
            //100+''
            //1000+''
            //10001
            //------------------------------------
            //0+''
            //01+''
            //01
        }
        int even=0,odd=0;
        reverse(s.begin(),s.end());
        //10001
        //------------
        //10
        for(int i=0;i<s.length();i++){
            if(i%2==0 && s[i]=='1'){
                even++;
            }
            if(i%2 !=0 && s[i]=='1'){
                odd++;
            }
        }
        vector<int>ans;
        ans.push_back(even);
        ans.push_back(odd);
        //stored as array
        return ans;
    }
};
