https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/description/
class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        //A FOR TOPS AND B FOR BOTTOMS
        vector<int>counta(7),countb(7),countsame(7);//for 1 to 6
        int n=A.size();
        for(int i=0;i<n;i++){
            int a=A[i],b=B[i];
            counta[a]+=1;
            countb[b]+=1;
            if(a==b){
                countsame[a]+=1;
            }
        }
        int ans=n;
            for(int v=1;v<=6;v++){
                if(counta[v]+countb[v]-countsame[v]==n){
                    int minswap=min(counta[v],countb[v])-countsame[v];
                    ans=min(ans,minswap);
                }
            }
        return ans==n ? -1:ans;
    }
};
//https://www.youtube.com/watch?v=9TuF5P-_DD8
