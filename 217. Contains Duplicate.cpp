class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (st.find(nums[i]) != st.end())
                return true;
            st.insert(nums[i]);
        }
        return false;
    }
};
