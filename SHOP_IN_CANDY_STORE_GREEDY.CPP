https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1
class Solution
{
public:
    vector<int> candyStore(int a[], int n, int k)
    {
        int mi=0;
        int ma=0;
        sort(a,a+n);
        int i=0;
        int j=n-1;
        while(i<=j){
            mi=mi+a[i];
            i++;
            j=j-k;
            //taking k greatest elements
            //for min cost to buy all candies
        }
        reverse(a,a+n);
        i=0;
        j=n-1;
        while(i<=j){
            ma=ma+a[i];
            i++;
            j=j-k;
            //taking k smallest elements now.
            //for maximum cost to buy all candies.
        }
        return {mi,ma};
    }
};
https://www.youtube.com/watch?v=YA9TVXnpr9E
