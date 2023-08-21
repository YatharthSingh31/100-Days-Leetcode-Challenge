class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size(), m = accounts[0].size(), max_count=INT_MIN, count=0;
        for(int i=0;i<n;i++){
            count =0;
            for(int j=0;j<m;j++){
                count+=accounts[i][j];
            }
            max_count = max(max_count, count);
        }
        return max_count;
    }
};