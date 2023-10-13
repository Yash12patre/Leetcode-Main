class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n= nums[0];
    int ind=0;
    while(nums[ind]!=-1){
        n= nums[ind];
        nums[ind]=-1;
        ind=n;
    }
return n;
    }
};