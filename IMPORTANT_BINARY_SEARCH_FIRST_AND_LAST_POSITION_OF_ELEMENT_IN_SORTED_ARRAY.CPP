https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_839724?leftPanelTab=0
#include<iostream>
using namespace std;
int first(vector<int> &a,int n,int k)
{
    int s = 0,e = n-1;
    int m =s+ (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
          if (a[m] == k) {
            ans = m;
            e = m - 1;
          } else if (k > a[m]) {
            s = m + 1;
          } else if (k < a[m]) {
            e = m - 1;
          }
   m = s+ (e-s)/2;
}
return ans;
}
int last(vector<int> &a,int n,int k)
{   
int ans = -1;
    int s=0 ,e = n-1;
    int m = s+(e-s)/2;
    while(s<=e)
    {
    if(a[m] == k)
    {
    s = m + 1;
    ans = m;
}
   else if(a[m]<k)
   {
    s = m+1;
   }
   else
   {
    e = m- 1 ;
   }
   m = s+ (e-s)/2;
}
return ans;
}
pair<int, int> findFirstLastPosition(vector<int> &a, int n, int k)
{
    // Write your code here.
    pair<int,int> p;
    p.first = first(a, n ,k);
    p.second =  last(a,n,k);
    return p;
}
