class SeatManager {
public:
    
    priority_queue<int, vector<int>, greater<int>> pq;
    SeatManager(int n) {
        for (int i = 1; i <=n; i++) {
            pq.push(i);
        }
    }
    
    int reserve() {
        int p = pq.top(); //O 1
        pq.pop(); //O lg n
        return p;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};
