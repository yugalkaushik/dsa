class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int min = 0;
        for(int i=0;i<nums.size();i++){
            int min = i;
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] < nums[min]){
                    min = j;
                }
            }
            swap(nums[i],nums[min]);
        }
        return nums;
    }
};

//tc = O(N^2) due to nested loops
//sc = O(1) as we are sorting the array in place