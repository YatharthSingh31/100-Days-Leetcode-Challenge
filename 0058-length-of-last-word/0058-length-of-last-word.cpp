class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, i=s.size()-1;
        while(s[i]==' ' && i>=0){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            i--;
            count++;
        }
        return count;
    }
};