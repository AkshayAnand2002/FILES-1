https://leetcode.com/problems/power-of-three/description/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        double x=log10(n)/log10(3);
        if(x==(int)x){
            return true;
        }
        else{
            return false;
        }
    }
};
/*
We need to check that if there exists an integer such that n==3^x , on taking log both sides we get log(n) = x*(log(3)) => logn/log3 == x , now x is a power of 3 iff x is an integer , if it is return true else return false.
*/
