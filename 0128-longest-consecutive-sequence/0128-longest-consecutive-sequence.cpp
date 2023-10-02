class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=0;
        unordered_set<int>us;
        if(n==0) return 0;
        for(int i=0;i<n;i++){
             us.insert(nums[i]);
        }
        for(auto it :us){
            if(us.find(it-1)==us.end()){
                int cnt=1;
                int x=it;
                while(us.find(x+1)!=us.end()){
                    x+=1;
                    cnt+=1;
                }
                longest=max(longest,cnt);
            }

        }

        return longest;
    }
};