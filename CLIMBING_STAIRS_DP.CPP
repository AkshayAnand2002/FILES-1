https://leetcode.com/problems/climbing-stairs/description/
class Solution {
public:
    int helper(int n,vector<int>&memo) {
        if(n<0){
            return 0;
        }
        if(memo[n] != -1){
            return memo[n];
        }
        if(n==0){
            return 1;
        }
        return memo[n]=helper(n-1,memo)+helper(n-2,memo);
    }
    int climbStairs(int n){
        vector<int>memo(n+1,-1);
        return helper(n,memo);
    }
};
/* THEORY --->
you are in xth step ==> means u can come to xth step from (x-1)th or (x-2) th step
so xth step = (x-1)th value +(x-2)th value ways
ie.. Cost for xth step = Cost for x-1th step + x-2th step
*/
// class Solution {
// public:
//     int climbStairs(int n) {
//         int arr[46];//as n ranges from 1 to 45
//         arr[1]=1;//for only 1 way
//         arr[2]=2;//for 2 ways i.e. 1->1 or directly 2
//         //from n=3 we calculate from last 2 steps.
//         for(int i=3;i<=n;i++){
//             arr[i]=arr[i-1]+arr[i-2];
//         }
//         return arr[n];
//     }
// };
/*
Memoization is a technique for improving the performance of recursive algorithms. It involves rewriting the recursive algorithm so that as answers to problems are found, they are stored in an array. Recursive calls can look up results in the array rather than having to recalculate them.
We start our journey from the top most destination state and compute its answer by taking in count the values of states that can reach the destination state, till we reach the bottom-most base state. Hence, it is also called as Top-Down Approach
*/
//USING MEMOIZATION/TOP-DOWN APPROACH
// class Solution {
// public:
//     int helper(vector<int> &dp,int n){
//         if(n<0) return 0;
//         if(n==0 || n==1)    return 1;
//         if(dp[n]!=-1)   return dp[n];
//         return dp[n]=helper(dp,n-1)+helper(dp,n-2);
//     }
//     int climbStairs(int n) {
//         vector<int> dp(n+1,-1);
//         return helper(dp,n);
//     }
// };
/*
Tabulation is a bottom-up method for solving DP problems.
It goes one level up and combines the solutions it previously obtained to construct the optimal solutions to more complex problems. Eventually, tabulation combines the solutions of the original problem's subproblems and finds its optimal solution.
*/
//USING BOTTOM-UP/TABULATION APPROACH
// class Solution {
// public:
//     int climbStairs(int n) {
//         vector<int> dp(n+1);
//         dp[0]=dp[1]=1;
//         for(int i=2;i<=n;i++)   
//             dp[i]=dp[i-1]+dp[i-2];
//         return dp[n];
//     }
// };
