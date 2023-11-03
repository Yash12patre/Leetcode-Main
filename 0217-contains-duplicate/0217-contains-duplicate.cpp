class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(auto i: nums){
            if(ans[i]>=1){
                return true;
            }
            else{
                ans[i]=+1;
            }
        }
        return false;
    }
};