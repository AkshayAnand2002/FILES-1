https://leetcode.com/problems/maximum-units-on-a-truck/description/
class Solution {
public:
static bool comp(const vector<int>&b1,const vector<int> &b2){
    return b1[1]>b2[1];
}
    int maximumUnits(vector<vector<int>>& b, int trucksize) {
        int n=b.size();
        sort(b.begin(),b.end(),comp);
        int total=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(total+b[i][0]>trucksize){
                ans+=(trucksize-total)*b[i][1];
                break;
                //when exceeding.
            }
            else{
                //not exceeding
                ans+=b[i][0]*b[i][1];
                total+=b[i][0];
            }
        }
        return ans;
    }
};
//https://www.youtube.com/watch?v=CRptuNkeINw&t=212s
//https://www.youtube.com/watch?v=SrdKYil7G28
