class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = 0;
        int l = 0; 
        int r = n - 1;
        int betweenmax = 0;
        while (r > l){
            int currarea = min(heights[l], heights[r]) * (r - l);
            maxarea = max(maxarea, currarea);
            if (heights[r] > heights[l]) l++;
            else r--;
        }

        return maxarea;
    }
};
