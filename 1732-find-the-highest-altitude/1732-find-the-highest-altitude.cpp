class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    vector <int> alt;   
    int n=0;
    alt.push_back(n);
    for(int i=0;i<gain.size();i++){
        n+=gain[i];
        alt.push_back(n);
    }
    return *max_element(alt.begin(), alt.end());
    }
};