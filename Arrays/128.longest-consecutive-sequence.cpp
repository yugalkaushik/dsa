class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int>us;
        for(int num:nums){
            us.insert(num);
        }
        int maxCount = 1;
        for(int num:us){
            if(us.find(num-1)==us.end()){
                int current = num;
                int count = 1;
                while(us.find(current+1)!=us.end()){
                    count++;
                    current++;
                }
                maxCount = max(maxCount,count);
            }
        }
        return maxCount;
    }
};

// tc: O(n)
// sc: O(n)
// Approach:
// 1. Use an unordered set to store the unique elements from the input vector for O(1) average time complexity lookups.
// 2. Iterate through each number in the unordered set. For each number, check if it is the start of a sequence by checking if the previous number (num - 1) is not present in the set.
// 3. If it is the start of a sequence, initialize a count and keep checking for the next numbers in the sequence (num + 1, num + 2, etc.) until you find a number that is not present in the set. Increment the count for each consecutive number found.
// 4. Update the maximum count of consecutive numbers found so far and return it at the end.