class Solution {
public:
    int count(int n){
        int count=0;
        if(n==0){
            return 0;
        }
        while(n!=0){
            int temp = n%2;
            n = n/2;
            if(temp==1){
                count++;
            }
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector <int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(count(i));
        }
        return ans;
    }
};