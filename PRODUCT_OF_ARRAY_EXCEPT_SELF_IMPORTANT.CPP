https://leetcode.com/problems/product-of-array-except-self/description/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>output;
        if(n<1){
            return output;
        }
        int product=1;
        for(int i=0;i<n;i++){
            product=product*nums[i];
            output.push_back(product);
            //taking left product.
        }
        product=1;
        for(int i=n-1;i>0;i--){
            output[i]=output[i-1]*product;
            product=product*nums[i];
        }
        output[0]=product;
        return output;
    }
};
//nums=[1 2 3 4]
//output=[1 2 6 24]
//output[n-1]=output[3]=6
//product=1*4=4
//output[2]=4*2=8
//product=4*3=12
//output[1]=1*12=12
//product=12*2=24
//output[0]=product=24
//we get final output.
//https://m.youtube.com/watch?v=gREVHiZjXeQ
