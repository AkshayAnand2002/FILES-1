https://leetcode.com/problems/gas-station/description/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int current=0;
        int total_fuel=0,total_cost=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            total_fuel+=gas[i];
        }
        for(int i=0;i<gas.size();i++){
            total_cost+=cost[i];
        }
        if(total_fuel<total_cost){
            return -1;
        }
        for(int i=0;i<gas.size();i++){
            current+=(gas[i]-cost[i]);
            //start from the point where gas[i]>cost[i]
            //here in eg1 it is 4 - 1 which occurs 1st.
            if(current<0){
                start=i+1;
                current=0;
            }
        }
        return start;
    }
};
//https://www.youtube.com/watch?v=HQpDS9wuzws
