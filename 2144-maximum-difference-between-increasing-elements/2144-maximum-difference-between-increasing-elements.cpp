class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int j=nums[0]; 
        int ans=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>j){
                ans=max(ans,nums[i]-j);
            }
            else{
                j=min(nums[i], j);
            }
        }
        return ans;
    }
};