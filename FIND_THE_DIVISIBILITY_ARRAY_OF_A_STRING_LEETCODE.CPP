https://leetcode.com/contest/weekly-contest-334/problems/find-the-divisibility-array-of-a-string/
class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        //int no=stoi(word);
        vector<int>answer;
        long long int n=word.length();
        vector<long long int>mid;
        long long int no=0;
        for(int i=0;i<n;i++){
            no=((no*10)+(word[i]-'0'))%m;
            mid.push_back(no);
        }
        for(int i=0;i<mid.size();i++){
            if(mid[i]%m==0){
                answer.push_back(1);
            }
            else{
                answer.push_back(0);
            }
        }
        return answer;
    }
};
