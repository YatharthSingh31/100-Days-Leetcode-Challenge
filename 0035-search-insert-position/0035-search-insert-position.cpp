class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            } else if (nums[i] > target) {
                if (i == 0) {
                    return 0; 
                } else if (nums[i - 1] < target) {
                    return i; 
                }
            }
        }
        return i;
    }
};
