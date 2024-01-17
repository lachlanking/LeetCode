class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int canPlace = 0;
        if(n==0) return true;

        if (flowerbed.size() == 1){
            if (flowerbed[0] == 1) return false; else return true;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < flowerbed.size(); j++) {
                if (j == 0) {
                    if (flowerbed[j] == 0 && flowerbed[j + 1] == 0) {
                        canPlace++;
                        flowerbed[j] = 1;
                    }
                } else if (j == flowerbed.size() - 1) {
                    if (flowerbed[j] == 0 && flowerbed[j - 1] == 0) {
                        canPlace++;
                        flowerbed[j] = 1;
                    }
                } else {
                    if (flowerbed[j] == 0 && flowerbed[j - 1] == 0 && flowerbed[j + 1] == 0) {
                        canPlace++;
                        flowerbed[j] = 1;
                    }
                }
            }
        }

        if (canPlace >= n) return true;
        else return false;
    }
};
