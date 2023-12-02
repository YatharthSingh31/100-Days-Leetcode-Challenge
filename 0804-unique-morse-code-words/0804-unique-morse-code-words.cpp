class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseCode = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        auto wordToMorse = [&](const string& word) {
            string transformation;
            for (char letter : word) {
                transformation += morseCode[letter - 'a'];
            }
            return transformation;
        };

        unordered_set<string> transformations;

        for (const string& word : words) {
            transformations.insert(wordToMorse(word));
        }

        return transformations.size();
    }
};