class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
            int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                cnt++;
            }else if(nums[i]==target){
                cnt;
            }
        }
            return cnt;
    }
};