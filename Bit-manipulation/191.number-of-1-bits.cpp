class Solution {
public:
    int hammingWeight(int n) {
        int count;
        while(n!=0){
            n = n & (n-1);
            count++;
        }
        return count;
    }
};

// tc = O(k) where k is the number of 1's in the binary representation of n
// sc = O(1)