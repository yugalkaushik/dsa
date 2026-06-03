class RecentCounter {
public:
    queue<int> q;

    RecentCounter() {
        
    }

    int ping(int t) {
        int leftRange = t - 3000;

        q.push(t);

        while (!q.empty() && q.front() < leftRange) {
            q.pop();
        }
        
        return q.size();
    }
};
// tc = O(n)
// sc = O(n)