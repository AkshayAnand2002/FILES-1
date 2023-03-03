https://leetcode.com/problems/can-place-flowers/description/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int total=0;
        for(int i=0;i<flowerbed.size() && total<n;i++){
            if(flowerbed[i]==0){
                int next=(i==flowerbed.size()-1)?0:flowerbed[i+1];
                //for last elem of array we take it as 0 otherwise take the next index.
                int prev=(i==0)?0:flowerbed[i-1];
                //for 1st elem of array prev is 0 otherwise take previous element.
                if(next==0 && prev==0){
                    flowerbed[i]=1;
                    //adjacent elements are 0.
                    total++;
                    //increasing count.
                }
            }
        }
        return total==n;
    }
};
