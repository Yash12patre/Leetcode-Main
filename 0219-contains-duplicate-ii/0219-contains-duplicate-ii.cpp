class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(um.count(nums[i]) && abs(i-um[nums[i]])<=k)
           return true;
           um[nums[i]]=i;
        }
        return false;
    }
};