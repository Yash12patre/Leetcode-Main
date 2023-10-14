class Solution {
public:
    int maxSubArray(vector<int>& array) {
     int sum = 0, smax = INT_MIN;
        for (int num : array) {
            sum += num;
            smax = max(smax, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return smax;
    }
};