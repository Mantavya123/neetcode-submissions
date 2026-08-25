class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min = 1;
        int max = INT_MAX;
        int ans = max;

        while (max >= min){
            int mid = min + (max - min) / 2;

            // Check whether mid can finish the banana pile
            int act_h = 0;
            for (int i = 0; i < piles.size(); i++) act_h += (piles[i] + mid - 1) / mid;

            // If mid can finish it, decrease max;
            if (act_h <= h){
                ans = mid; 
                max = mid - 1;
            }
            //else increase min
            else min = mid + 1;

        }

        return ans;
    }
};
