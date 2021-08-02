class Solution {
public:
    bool check(vector<int>& piles, int h, int k) {
        int time = 0;
        for (int i : piles) {
            time += (i - 1) / k + 1;
        }
        return time <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (check(piles, h, mid) == true) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return r;
    }
    
};
