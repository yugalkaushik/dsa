class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> result;
        int sr = sqrt(n);
        for(int i = 1;i<=sr;i++){
            if(n%i==0){
                result.push_back(i);
                if(n/i != i) result.push_back(n/i);
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};

// time complexity: O(sqrt(n)
// space complexity: O(sqrt(n))
