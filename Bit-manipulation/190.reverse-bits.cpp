class Solution {
public:
    int reverseBits(int n) {
        if(n==0) return 0;
        int result = 0;
        for(int i=1;i<=32;i++){
            result = result<<1;
            int a = n&1;
            result = result | a;
            n = n>>1;
        }
        return result;
    }
};
// tc = O(1)
// sc = O(1)