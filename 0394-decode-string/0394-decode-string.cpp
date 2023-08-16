class Solution {
public:
    string decodeString(string s) {
        string ch;
        stack <char> c;
        for(int i=0;i<s.size();i++){
            if(s[i]!=']'){
                c.push(s[i]);
            }
            else{
                string str;
                while(c.top() != '[') {
                    str = c.top() + str;
                    c.pop();
                }
                c.pop();
                string k;
                while(!c.empty() && isdigit(c.top())) {
                    k = c.top() + k;
                    c.pop();
                }
                int repeatCount = stoi(k);
                string decodedStr = "";
                for(int j = 0; j < repeatCount; j++) {
                    decodedStr += str;
                }
                for(int i=0;i<decodedStr.size();i++){
                    c.push(decodedStr[i]);
                }
            }
        }
        while(!c.empty()) {
            ch = c.top() + ch;
            c.pop();
        }
        return ch;
    }
};