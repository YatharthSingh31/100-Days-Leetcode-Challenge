class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                count = i;
                break;
            }
        }
        if (count != -1) {
            int i = 0;
            while (i < count) {
                swap(word[i], word[count]);
                i++;
                count--;
            }
        }
        return word;
    }
};