class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int i:nums){
            if(um[i]>=1)
               return true;
               um[i]++;
        }
            return false;
    }
};