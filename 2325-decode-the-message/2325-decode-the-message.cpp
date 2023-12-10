class Solution {
public:
    string decodeMessage(string key, string message) {
        char current = 'a';
        map <char, char> m;
        for(int i=0;i<key.size();i++){
            if (key[i] != ' ' && m.find(key[i]) == m.end()) {
                m[key[i]] = current;
                current++;
            }
        }
        string s;
        for(int i=0;i<message.size();i++){
            if (message[i] == ' ') {
                s += ' ';
            } else if (m.find(message[i]) != m.end()) {
                s += m[message[i]];
            }
        }
        return s;
    }
};