class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> cset;
        while(cset.find(n)==cset.end()){
            cset.insert(n);
            int sum = 0;
            while(n>0){
                int k = n%10;
                sum = sum + k * k;
                n = n/10;
            }
            if(sum == 1) return true;
            n = sum;
        }
        return false;
    }
};
// tc: O(log n) sc: O(log n)
// Approach: We can use a set to store the numbers that we have seen before. We can then iterate through the process of finding the sum of the squares of the digits of the number. If we find a number that we have seen before, then we can return false. If we find a number that is equal to 1, then we can return true. We can continue this process until we find a number that we have seen before or we find a number that is equal to 1.