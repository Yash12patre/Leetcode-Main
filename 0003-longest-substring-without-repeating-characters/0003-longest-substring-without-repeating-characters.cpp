class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>ans(256,-1);
        int left=0;
        int right=0;
        int len=0;
        while(right<s.size()){
            if(ans[s[right]]!=-1){
                left=max(ans[s[right]]+1, left);
            }
            ans[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};