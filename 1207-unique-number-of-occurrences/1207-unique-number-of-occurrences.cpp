class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int, int> map;
        vector <int> v;
        for(auto x: arr){
            map[x]++;
        }
        for(auto &x: map){
            v.push_back(x.second);
        }
        sort(v.begin(), v.end());
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]){
                return false;
                break;
            }
        }
        return true;
    }
};