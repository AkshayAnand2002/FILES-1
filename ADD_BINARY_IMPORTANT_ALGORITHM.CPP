https://leetcode.com/problems/add-binary/description/
https://www.youtube.com/watch?v=4IrGrk2HRD8
class Solution {
public:
    string addBinary(string a, string b) {
        int alen=a.size();
        int blen=b.size();
        string s;
        if(alen>blen){
            b=s.append(alen-blen,'0')+b;
        }
        else if(blen>alen){
            a=s.append(blen-alen,'0')+a;
        }
        //adding 0s in front of the no. having smaller no. of digits.
        //strings of equal length now.
        int carry=0;
        string answer;
        for(int i=a.size()-1;i>=0;i--){
            int sum=(a[i]-'0')+(b[i]-'0')+carry;
            answer=to_string(sum%2)+answer;
            carry=sum/2;
        }
        if(carry!=0){
            answer="1"+answer;
        }
        return answer;
    }
};
