https://www.interviewbit.com/problems/sum-of-7-s-multiple/
long Solution::solve(int A, int B) {
    long start=0;
    for(int i=A;i<=B;i++){
        if(i%7==0){
            start=i;
            break;
        }
    }
    long end=0;
    for(int i=B;i>=A;i--){
        if(i%7==0){
            end=i;
            break;
        }
    }
    long a=(end-start)/7;
    long no_of_terms=a+1;
    long sum=no_of_terms*(start+end)/2;
    return sum;
}
