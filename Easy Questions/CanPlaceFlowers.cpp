using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        std::ios::sync_with_stdio(false);
        int size = flowerbed.size();
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                int prev = (i == 0) ? 0 : flowerbed[i - 1];
                int next = (i == size - 1) ? 0 : flowerbed[i + 1];
                if (prev == 0 && next == 0) {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;
    }
};
