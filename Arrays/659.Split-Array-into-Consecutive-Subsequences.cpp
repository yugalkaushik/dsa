class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> avail;
        unordered_map<int,int> vacancy;
        for(int num:nums){
            avail[num]++;
        }
        for(int num:nums){
            if(avail[num] == 0) continue;
            if(vacancy[num] > 0){
                vacancy[num]--;
                vacancy[num+1]++;
                avail[num]--;
            }
            else if(avail[num+1] > 0 && avail[num+2] > 0){
                avail[num]--;
                avail[num+1]--;
                avail[num+2]--;
                vacancy[num+3]++;
            } else return false;
        }
        return true;
    }
};

// tc: O(n)
// sc: O(n)
// Approach:
// 1. Use two hash maps: `avail` to count the availability of each number and `vacancy` to count the number of subsequences that are currently waiting for a specific number to continue.
// 2. Iterate through each number in the input vector `nums`. For each number, check if it is available in the `avail` map. If it is not available, skip to the next number.
// 3. If the number is available, check if there is a subsequence waiting for this number in the `vacancy` map. If there is, decrement the vacancy for this number and increment the vacancy for the next number (num + 1) to indicate that the subsequence is now waiting for the next number.
// 4. If there is no subsequence waiting for this number, check if the next two numbers (num + 1 and num + 2) are available in the `avail` map. If they are, decrement their availability and increment the vacancy for the number after that (num + 3) to indicate that a new subsequence has been started and is now waiting for the next number.
// 5. If neither of the above conditions are met, return false, as it is not possible to form the required subsequences. If the loop completes successfully, return true.