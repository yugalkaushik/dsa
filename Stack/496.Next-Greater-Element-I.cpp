class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        stack<int> st;
        unordered_map<int,int> um;
        vector<int> result;

        for(int i=m-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            
            if(st.empty()){
                um[nums2[i]] = -1;
            } 
            else{
                um[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            result.push_back(um[nums1[i]]);
        }
        return result;
    }
};

// tc = O(n+m)
// sc = O(m)