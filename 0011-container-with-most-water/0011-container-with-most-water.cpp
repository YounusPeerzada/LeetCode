class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();
        int l = 0;
        int r = n - 1;

        while (l < r) {
            int w = r - l;
            int ht = min(height[l], height[r]);
            int currWater = w * ht;

            maxWater = max(maxWater, currWater);

            height[l] < height[r] ? l++ : r--;
        }

        return maxWater;
    }
};