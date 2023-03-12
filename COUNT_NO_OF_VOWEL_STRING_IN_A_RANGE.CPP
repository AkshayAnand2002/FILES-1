https://leetcode.com/contest/weekly-contest-336/problems/count-the-number-of-vowel-strings-in-range/
class Solution {
public:
    bool vc(char c){
        //function
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        else{
            return false;
        }
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        // vector<int>(vector<string>)
//         for(int i=left;i<=right;i++){
            
//         }
        //int count=0;
        // vector<string>w1;
        // for(int i=left;i<=right;i++){
        //     w1[i]
        // }
        // for(string x:words){
        //     int n=x.length()-1;
        //     if((x[0]=='a'||x[0]=='e'||x[0]=='i'||x[0]=='o'||x[0]=='u') && (x[n]=='a' || x[n]=='e' || x[n]=='i' || x[n]=='o' || x[n]=='u')){
        //         count++;
        //     }
        // }
        // return count;
        int count=0;
        for(int i=left;i<=right;i++){
            if(vc(words[i][0])&& vc(words[i][words[i].size()-1])){
                //char traversal
                count++;
            }
        }
        return count;
    }
};
