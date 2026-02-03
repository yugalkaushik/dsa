class Solution {
public:
    int result = 0;
    int reverse(int x) {
        if (x == 0) return result;
        int digit = x % 10;
        if(result > INT_MAX/10 || result < INT_MIN/10) return 0;
        result = (result * 10) + digit;
        return reverse(x/10);
    }
};

// TC = O(logn)