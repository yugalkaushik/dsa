class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            int val;
            if(nums1[i]<nums2[j]){
                val=nums1[i];
                i++;
            } else if(nums2[j]<nums1[i]) {
                val = nums2[j];
                j++;
            } else {
                val = nums1[i];
                i++;
                j++;
            }
            if(result.empty() || result.back()!= val){
                result.push_back(val);
            }
        }
        while(i<nums1.size()){
            if(result.empty() || result.back()!= nums1[i])
                result.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            if(result.empty() || result.back()!= nums2[j])
                result.push_back(nums2[j]);
            j++;
        }
        return result;
    }
};

//tc = O(N+M)
//sc = O(N+M)