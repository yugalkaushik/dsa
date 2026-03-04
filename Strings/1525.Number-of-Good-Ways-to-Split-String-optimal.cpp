class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        unordered_set<int> st;
        vector<int> left(n), right(n);
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            left[i] = st.size();
        }
        st.clear();
        for(int i=n-1;i>0;i--){
            st.insert(s[i]);
            right[i] = st.size();
        }
        int count = 0;
        for(int i=0;i<n-1;i++){
            if(left[i]==right[i+1]) count++;
        }
        return count;
    }
};

// tc: O(n) where n is the length of the input string s
// sc: O(n) for the two vectors storing the count of unique characters from the left and right sides of the string
// Approach:
// 1. Create two vectors `left` and `right` of size n to store the count of unique characters from the left and right sides of the string, respectively.
// 2. Iterate through the string from left to right, inserting characters into an unordered set and updating the `left` vector with the size of the set at each index.
// 3. Clear the unordered set and iterate through the string from right to left, inserting characters into the set and updating the `right` vector with the size of the set at each index.
// 4. Finally, iterate through the string and count the number of indices where the count of unique characters from the left side (left[i]) is equal to the count of unique characters from the right side (right[i+1]). Return this count as the result.
