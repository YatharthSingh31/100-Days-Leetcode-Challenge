class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                string reversed = words[i];  
                reverse(reversed.begin(), reversed.end());
                if (reversed == words[j]) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};