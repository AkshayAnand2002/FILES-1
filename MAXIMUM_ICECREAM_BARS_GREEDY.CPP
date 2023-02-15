https://leetcode.com/problems/maximum-ice-cream-bars/description/
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        //HERE WE START PICKING THE ITEM WHICH HAS LOWER COST AND
        //INCREASE THE COUNT.
        //GREEDY APPROACH.
        int answer=0;
        sort(costs.begin(),costs.end());
        for(auto x:costs){
            if(x<=coins){
                //means icecream can be bought.
                answer++;
                coins-=x;
            }
        }
        return answer;
    }
};
//https://www.youtube.com/watch?v=65DrTqALAak
