https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     set<int> s; 
//         for(int i =0; i<nums.size(); i++)
//         {
//             s.insert(nums[i]);
//         }
        
//         int ans = s.size();
//         nums.clear();  //TO DELETE ELEMENTS OF nums AND IN THAT WE PUT THE ELEMENTS OF SET AND THEN RETURN ITS SIZE.
//         for(auto i:s)
//         {
//            //int k = *i;
//            nums.push_back(i);
//         }
//         return ans;
//     }
// };
/*
1.First of all we have to create an empty set then we have to store all the element in the set.
2.As we know in set all element appears once...so it is clear that no element is repeated.
3.Then we have to return the size of element and which is present in set but before we have to restore all the element in the nums array.
4.so first of all clear all the element in the nums array using nums.clear( );
5.Then in nums array push all the set element.
6.And in last return the size of set.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = size(arr);
         int position = 0;
        int currValue = INT_MIN;
        for(int i=0;i<n;i++){

        // if current value and arr[i] is not same
        // place it in position 

            if(currValue!=arr[i]){
                
                currValue= arr[i];
                arr[position++] = currValue;
            }
            else{
                continue;
            }
        }
       return position;
    }
};
/*
Take a pointer position to point the available position for distinct value
Check for each current value currValue whether the element is new or not, if new then place it in position and increment the position else continue.
*/
