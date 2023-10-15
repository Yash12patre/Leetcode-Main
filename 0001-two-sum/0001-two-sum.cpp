class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ans;
    
    for (int i = 0; i < nums.size(); i++) {
      int req = target - nums[i];
      if (ans.count(req)) {
        return {ans[req], i};
      }
      ans[nums[i]] = i;
    }
    return {}; 
    }
};