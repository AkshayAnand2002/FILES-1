https://www.interviewbit.com/problems/smaller-or-equal-elements/
int Solution::solve(vector<int> &A, int B) {
    int count=0;
    int n=A.size();
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A[mid]>B){
            end=mid-1;
        }
        else{
            start=mid+1;
            count=mid+1;
            //as index of middle elem is the elem upto which we get
            //the condition to be satisfied so we to get no. of elements we add 1
            //as middle elem is also included.
        }
    }
    return count;
}
