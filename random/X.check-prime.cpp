class Solution {
public:
    bool isPrime(int n) {
        int sr = sqrt(n);
        if(n <= 1) return false;
        for (int i=2; i<=sr;i++){
            if(n%i==0) return false;
        }
        return true;
    }
};

// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)