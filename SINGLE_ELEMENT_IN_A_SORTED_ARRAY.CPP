https://leetcode.com/problems/single-element-in-a-sorted-array/description/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;
            if (mid % 2 == 1) {
                mid--;
            }
            if (nums[mid] != nums[mid + 1]) {
                right = mid;
            } else {
                left = mid + 2;
            }
        }
        return nums[left];
    }
};
/*
Since every element in the sorted array appears exactly twice except for the single element, we know that if we take any element at an even index (0-indexed), the next element should be the same. Similarly, if we take any element at an odd index, the previous element should be the same. Therefore, we can use binary search to compare the middle element with its adjacent elements to determine which side of the array the single element is on.

If the middle element is at an even index, then the single element must be on the right side of the array, since all the elements on the left side should come in pairs. Similarly, if the middle element is at an odd index, then the single element must be on the left side of the array.

We can continue this process by dividing the search range in half each time, until we find the single element.

Approach for this Problem:
Initialize two pointers, left and right, to the first and last indices of the input array, respectively.
While the left pointer is less than the right pointer:
a. Compute the index of the middle element by adding left and right and dividing by 2.
b. If the index of the middle element is odd, subtract 1 to make it even.
c. Compare the middle element with its adjacent element on the right:
i. If the middle element is not equal to its right neighbor, the single element must be on the left side of the array, so update the right pointer to be the current middle index.
ii. Otherwise, the single element must be on the right side of the array, so update the left pointer to be the middle index plus 2.
When the left and right pointers converge to a single element, return that element.
*/
//HASHMAP APPROACH BUT THIS IS NOT TRUE HERE AS DOES NOT SATISFY CONSTRAINTS
/*
class Solution {
public:
    int singleNonDuplicate(vector<int>& n) {

        unordered_map<int,int>m;

<!-- Putting frequency of element in hash table -->

        for(auto x:n)
        {
            m[x]++;
        }

<!-- Checking the key which have count of occurance is one -->

        for(auto e:m)
        {
            if(e.second==1)
            {
                return e.first;
            }
        }
      return 0;   
    }
};
*/
