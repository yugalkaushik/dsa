class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            if(umap.find(nums[i]) != umap.end()){
                umap[nums[i]]++;
            } else umap[nums[i]] = 1;
        }
        int count = 0;
        for(auto &it:umap){
            count = count + ((it.second * (it.second-1))/2);
        }
        return count;
    }
};

// tc: O(n)
// sc: O(n)
// Approach:
// 1. Count the frequency of each number in the input vector using an unordered map.
// 2. For each unique number, calculate the number of good pairs that can be formed using the formula nC2 = n! / (2! * (n-2)!) = n*(n-1)/2, where n is the frequency of that number.
// 3. Sum up the counts for all unique numbers to get the total number of good pairs.