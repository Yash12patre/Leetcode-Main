class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
     int count=1;
     int maxi=1;
     for(int i=1;i<nums.size();i++){
        if(nums[i-1]<nums[i]){
            count++;
            maxi=max(count,maxi);
        }
            else{
                count =1;
            }
     }
     return maxi;
    }
};