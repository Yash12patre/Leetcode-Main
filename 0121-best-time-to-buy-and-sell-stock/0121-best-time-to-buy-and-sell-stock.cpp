class Solution {
public:
    int maxProfit(vector<int>& nums) {
    int maxi = 0;
    int mini = INT_MAX;
    for(int i = 0; i < nums.size(); i++){
        mini = min(mini, nums[i]);
        maxi = max(maxi, nums[i] - mini);
    }
    return maxi;
    }
};