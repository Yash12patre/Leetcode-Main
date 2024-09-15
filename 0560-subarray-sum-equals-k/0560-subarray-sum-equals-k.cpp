class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>ans;
        ans[0]=1;
        int cs=0;
        int cnt=0;
        for(int num : nums){
            cs+=num;
            if(ans.find(cs-k)!=ans.end()){
                cnt+=ans[cs-k];
            }
            ans[cs]++;
        }
        return cnt;
    }
};