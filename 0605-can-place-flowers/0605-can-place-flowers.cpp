class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        for (int i = 0; i < m && n>0; i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] != 1) && (i == m - 1 || flowerbed[i + 1] != 1)) {
                flowerbed[i] = 1;
                n--;
            }
        }
        if(n!=0){
            return false;
        }
        return true;
    }
};