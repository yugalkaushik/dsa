class Solution {
public:
    bool isArmstrong(int n) {
        if (n==0) return true;
        int m = n;
        int temp = n;
        int count = 0;
        while(temp>0){
            count++;
            temp = temp/10;
        }
        int power[10];
        for(int i=0;i<10;i++){
            int p = 1;
            for(int d=0;d<count;d++){
                p = p*i;
            }
            power[i] = p;
        }

        int armstrong = 0;
        while(m > 0){
            int digit = m%10;
            armstrong = armstrong + power[digit];
            m = m/10;
        }
        return armstrong == n;;
    }
};
// Time Complexity: O(logn)
// Space Complexity: O(1)
