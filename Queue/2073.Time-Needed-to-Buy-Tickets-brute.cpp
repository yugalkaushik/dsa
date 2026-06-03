class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int count = 0;
        int i = 0;
        while(tickets[k] != 0){
            if(tickets[i]>0){
                tickets[i]--;
                count++;
            }
            i = (i+1) % n;
        }
        return count;
    }
};