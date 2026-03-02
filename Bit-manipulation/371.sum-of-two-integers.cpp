class Solution {
public:
    int getSum(int a, int b) {
        while( b!= 0){
            int carry = (a&b) << 1;
            a = a^b;
            b = carry;
        }
        return a;
    }
};

// tc = O(1)
// sc = O(1)

// Approach:
// 1. Use bitwise XOR to add the two numbers without carrying.
// 2. Use bitwise AND to find the carry and left shift it by 1 to add it in the next iteration.
// 3. Repeat the process until there is no carry left.
// 4. The final value of 'a' will be the sum of the two numbers.