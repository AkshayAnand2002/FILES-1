https://www.interviewbit.com/problems/diagonal-flip/
vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(A[i][j],A[j][i]);
            //transposing matrix
        }
    }
    return A;
}
