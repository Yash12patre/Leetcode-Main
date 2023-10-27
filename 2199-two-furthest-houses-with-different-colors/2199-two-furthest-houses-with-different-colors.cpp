class Solution {
public:
    int maxDistance(vector<int>& nums) {
        int ans =0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j]){
                    ans=max(ans,j-i);
                }
            }
        }
        return ans;
    }
};