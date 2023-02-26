https://www.interviewbit.com/problems/maximum-ones-after-modification/
int Solution::solve(vector<int> &A, int B) {
    int flip=0;
    int ans=0;
    int i=0;//moves forward
    int j=0;//unflipping 0 to 1 when req.
    int n=A.size();
    while(i<n){
        if(A[i]==0){
            flip++;
        }
        //B is the max flips allowed.
        while(flip>B){
            //unflip prev 0 as otherwise can't move forward.
            if(A[j]==0){
                flip--;
            }
            j++;
        }
        //checking answer
        ans=max(ans,i-j+1);
        i++;
    }
    return ans;
}
//https://www.youtube.com/watch?v=hzueK-imcXg
