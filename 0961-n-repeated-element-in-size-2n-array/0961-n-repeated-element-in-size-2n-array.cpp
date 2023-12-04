class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        
        unordered_map <int, int> umap;
        
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        
        for(auto const &i: umap){
            if(i.second==n){
                return i.first;
            }
        }
        return 0;
    }
};