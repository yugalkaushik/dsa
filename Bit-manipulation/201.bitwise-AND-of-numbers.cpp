class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shiftCount = 0;
        while(left<right){
            left>>=1;
            right>>=1;
            shiftCount++;
        }
        left<<=shiftCount;
        return left;
    }
};

//tc = O(1)
//sc = O(1)