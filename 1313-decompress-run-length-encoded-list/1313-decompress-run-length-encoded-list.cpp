class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> v;
        stack <int> s;
        int i=0;
        // while(i<nums.size()){
        //     int freq = nums[i];
        //     int val = nums[i++];
        //     for(int j=0;j<freq;j++){
        //         v.push_back(val);
        //     }
        // i+=2;
        // }
        for (int i = 0; i < nums.size(); i += 2) {
            int freq = nums[i];
            int val = nums[i + 1];
            for (int j = 0; j < freq; ++j) {
                v.push_back(val);
            }
        }
    return v;
    }
};