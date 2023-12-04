class Solution {
public:
    string sortString(string s) {
        map <char, int> umap;
        
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        vector <char> v;
        vector <int> freq;
        for(const auto &i: umap){
            v.push_back(i.first);
            freq.push_back(i.second);
        }
        int i=0;
        string result;
        while(i<s.size()){
            for(int j=0;j<v.size();j++){
                if(freq[j]>=1){
                    result+=v[j];
                    i++;
                    freq[j]--;
                }
            }
            for(int j=v.size()-1;j>=0;j--){
                if(freq[j]>=1){
                    result+=v[j];
                    i++;
                    freq[j]--;
                }
            }
        }
        return result;
    }
};