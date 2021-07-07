class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        
        int top = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[top-1]) {
                nums[top] = nums[i];
                top++;
            }
        }
        return top;
    }
};
