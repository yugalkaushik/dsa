class Solution {
  public:
    void printNumbers(int n) {
        if(n==1){
          cout<<1;
          return;
        }
        printNumbers(n-1);
        cout<<n;
    }
};

//tc: O(n)
//sc: O(n) (due to recursion stack)