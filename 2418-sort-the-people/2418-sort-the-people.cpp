class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<string, int> u;
        vector<pair<string, int>> pairs;

        // Create a vector of pairs (name, height)
        for (int i = 0; i < names.size(); i++) {
            pairs.push_back({names[i], heights[i]});
        }

        // Sort the vector of pairs based on heights
        sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        
        reverse(pairs.begin(), pairs.end());
        
        // Extract names from the sorted pairs
        vector<string> result;
        for (const auto& p : pairs) {
            result.push_back(p.first);
        }

        return result;
    }
};