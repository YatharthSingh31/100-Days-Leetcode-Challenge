class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0, result=0, j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            while(zero>1){
                if(nums[j]==0){
                    zero--;
                }
                j++;
            }
            result = max(result, i-j);
        }
        return result;
    }
};