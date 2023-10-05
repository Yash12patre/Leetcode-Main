class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            int z=-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=+nums[j]+nums[k];
                if(sum<z){
                    j++;
                }
                else if(sum>z){
                  k--;
                }
                else{
                        vector<int>temp= {nums[i], nums[j], nums[k]};
                        ans.push_back(temp);
                        j++;
                        k--;
                        while(j<k && nums[j]==temp[1])j++;
                        while(j<k && nums[k]==temp[1])k++;
                }
            }
            while(i+1<n && nums[i+1]==nums[i])i++;

        }
        return ans;
    }
};