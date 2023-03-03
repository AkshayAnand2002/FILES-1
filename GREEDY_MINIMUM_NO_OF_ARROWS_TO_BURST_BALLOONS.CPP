https://www.youtube.com/watch?v=fvBhjAp0j9c
https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/
bool comp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
    //comparator function for sorting 2d vector.
    //it sorts based on endtime or finish time.
    //sorts vector based on their endtime. [0,1],[2,3],..
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0){
            return 0;
        }
        sort(points.begin(),points.end(),comp);
        //sorts
        int arrows=1;//initially 1 arrow.
        int end=points[0][1];//initially end is assigned end time of 1st balloon.
        for(int i=1;i<points.size();i++){
            if(points[i][0]>end){
                //if start time of next processes > end
                //then arrows need to be increased.
                arrows++;
                end=points[i][1];
                //new end point as start>end.
            }
        }
        return arrows;
    }
};
