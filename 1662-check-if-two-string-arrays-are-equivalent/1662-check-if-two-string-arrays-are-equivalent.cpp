class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s, l;
        for(int i=0;i<word1.size();i++){
            s+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            l+=word2[i];
        }
        // sort(s.begin(), s.end());
        // sort(l.begin(), l.end());
        return s==l;
    }
};