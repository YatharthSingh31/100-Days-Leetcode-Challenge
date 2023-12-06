class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int ele=0; 
        for(int i=0;i<nums.size();i++){
            ele+=nums[i];
        }

        int digi = 0;

        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            while(x){
                int rem = x % 10;
                digi+= rem;
                x = x/10;
            }
        }

        return abs(ele - digi);
    }
};