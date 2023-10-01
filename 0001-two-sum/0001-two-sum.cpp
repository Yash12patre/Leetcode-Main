class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>um;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int req=target-nums[i];
            if(um.count(req)){
                return{um[req],i};
            }
            um[nums[i]]=i;
        }
        return {};
    }
};