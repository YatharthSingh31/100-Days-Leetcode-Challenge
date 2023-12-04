class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> umap;
        vector<int> v;

        for (int i = 0; i < s.size(); i++) {
            umap[s[i]]++;
        }

        for (const auto &entry : umap) {
            v.push_back(entry.second);
        }

        bool count = true;  // Initialize to true

        for (int i = 1; i < v.size(); i++) {
            if (v[i] != v[0]) {
                count = false;
                break;  // Break out of the loop as soon as you find a non-equal count
            }
        }

        return count;
    }
};