class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2){
        int n1=size(nums1),n2=size(nums2),res=0;
        for(int i=0,j=0;i<n1&&j<n2;){
            if(nums1[i]<=nums2[j]) res=max(res,(j++)-i);
            else i++;
        }
        return res;
    }
};