class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l=0;
        int r= nums.size()-1;
        int water=0;
        while(l<r){
            int area = min(nums[l],nums[r])*(r-l);
            water=max(area,water);
            if(nums[l]<nums[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return water;
    }
};