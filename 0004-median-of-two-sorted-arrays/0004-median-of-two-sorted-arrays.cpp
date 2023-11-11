class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto x: nums1){
            v.push_back(x);
        }
        for(auto x: nums2){
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int size=v.size();
        return size%2?v[size/2]:(v[size/2-1]+v[size/2])/2.0;
    }
};