class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            if(ans[nums[i]]>=1){
                return true;
            }
            else{
                ans[nums[i]]++;
            }
        }
        return false;
    }
};