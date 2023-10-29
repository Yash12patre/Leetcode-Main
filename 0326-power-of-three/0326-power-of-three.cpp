class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 || n==1)
        return n;
        if(n%3==0 && isPowerOfThree(n/3))
        return 1;
        else return 0;
    }
};