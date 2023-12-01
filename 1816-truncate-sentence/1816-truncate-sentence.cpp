class Solution {
public:
    string truncateSentence(string s, int k) {
        std::istringstream iss(s);
        std::vector<std::string> words;
        std::string word;

        while (iss >> word) {
            words.push_back(word);
        }
        k = std::min(k, static_cast<int>(words.size()));
        std::ostringstream oss;
        for (int i = 0; i < k; ++i) {
            oss << words[i];
            if (i < k - 1) {
                oss << " ";
            }
        }

        return oss.str();
    }
};