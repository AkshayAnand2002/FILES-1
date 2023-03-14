https://www.codingninjas.com/codestudio/problems/nth-term-of-gp_797999?leftPanelTab=0
//NTH TERM OF GP=A*R^(N-1)
// long long power(int R,int N,int mod){
//     if(N==0){
//         return 1;
//     }
//     int i=0;
//     long long pow=1;
//     while(i<N){
//         pow=(pow*R)%mod;
//         i++;
//     }
//     return pow;
// }
long long power(int R, int N, int mod) {
    if(N == 0){
        return 1;
    }
    long long temp = power(R, N / 2, mod) % mod;
    if(N % 2 == 0) {
        return (temp * temp) % mod;
    }
    else {
        return (((temp * temp) % mod) * R) % mod;
    }
}
int nthTermOfGP(int N, int A, int R) {
    int mod=1000000007;
    long long answer=(A*power(R,N-1,mod))%mod;
    return (int)answer;
}

