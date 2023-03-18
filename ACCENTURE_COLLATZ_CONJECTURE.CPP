https://www.interviewbit.com/problems/collatz-conjecture/
long Solution::solve(int A, int B) {
    long answer=A;
    int n=B;
    for(int i=1;i<n;i++){
        if(answer%2==0){
            answer=answer/2;
        }
        else{
            answer=3*answer+1;
        }
    }
    return answer;
}
