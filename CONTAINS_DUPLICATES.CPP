https://leetcode.com/problems/contains-duplicate/description/
// class Solution {
//   public:
//       bool containsDuplicate(vector<int>& nums) {
//           map<int,int> mp;
//           for(auto i : nums){ mp[i]++;}
//           bool flag = false;
//           for(auto i : mp){
//               if(i.second >= 2) {
//                 flag=true;
//               };
//           }
//           return flag;
//       }
//   };
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return unordered_set(nums.begin(), nums.end()).size() != nums.size();
    }
};
