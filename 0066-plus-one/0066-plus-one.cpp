class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
       int n= nums.size()-1;
       for(int i=n;i>=0;--i){
           if(nums[i]==9){
               nums[i]=0;
           }
           else{
               nums[i]+=1;
               return nums;
           }
       }
       nums.push_back(0);
       nums[0]=1;
       return nums; 
    }
};