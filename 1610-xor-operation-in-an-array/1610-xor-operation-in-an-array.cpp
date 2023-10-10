class Solution {
public:
    int xorOperation(int n, int start) {
        int x=0;
        int ans =0;
        for(int i = 0; i<n ; i++){
            x=start+2*i;
            ans=ans^x;
        }
    return ans ;
    }
};