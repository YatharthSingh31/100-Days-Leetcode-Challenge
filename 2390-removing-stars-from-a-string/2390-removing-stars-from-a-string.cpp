class Solution {
public:
    string removeStars(string s) {
        stack <char> ch;
        string c;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                ch.push(s[i]);
            }
            else{
                if(!ch.empty()){
                    ch.pop();
                }
            }
        }
        while(!ch.empty()){
            c+=ch.top();
            ch.pop();
        }
        reverse(c.begin(), c.end());
        return c;
    }
};