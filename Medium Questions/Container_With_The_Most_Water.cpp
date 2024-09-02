#define ENABLE_DEBUG_OUTPUT 0

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int current_height = min(height[left], height[right]);
            int current_width = right - left;
            int current_area = current_height * current_width;
            max_area = max(max_area, current_area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_area;
    }
};
