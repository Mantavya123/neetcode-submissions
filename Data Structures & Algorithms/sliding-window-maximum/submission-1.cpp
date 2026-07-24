class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int l = 0;
        int n = nums.size();
        int r = min(k - 1, n - 1);
        
        while (r < n){
            int maxint = INT_MIN;
            for (int i = l; i <= r; i++) if (maxint < nums[i]) maxint = nums[i];
            ans.push_back(maxint);
            l++;
            r++;
        }

        return ans;
    }
};
