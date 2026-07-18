class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(auto i:nums1){
            nums2.push_back(i);
        }
        sort(nums2.begin(),nums2.end());
        int n=nums2.size();
        // float mid;
        if((n%2)!=0){
            return nums2[n/2];
        }
        else{
            return (nums2[n/2-1]+nums2[n/2])/2.0;
        }
        
    }
};