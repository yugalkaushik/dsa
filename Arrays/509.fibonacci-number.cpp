class Solution {
public:
    int fib(int n) {
        vector<int> arr(2);
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2;i<=n;i++){
            arr[i%2] = arr[(i-1)%2] + arr[(i-2)%2];
        }
        return arr[n%2];
    }
};
//tc = O(N)
//sc = O(1)