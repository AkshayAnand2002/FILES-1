https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
        //sorting based on ending times.
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            pair<int,int>p=make_pair(start[i],end[i]);
            v.push_back(p);
        }
        sort(v.begin(),v.end(),cmp);
        //custom comparator used.
        int count=1;
        int ansend=v[0].second; // for 1st task ending time.
        for(int i=1;i<n;i++){
            if(v[i].first>ansend){
                //checking for the further process starting time > ending time of
                //previous process.
                count++;
                ansend=v[i].second;
            }
        }
        return count;
    }
};
