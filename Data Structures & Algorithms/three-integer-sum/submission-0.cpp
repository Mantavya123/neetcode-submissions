class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++){
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int l = i + 1;
            int r = n - 1;
            while (r > l){
                if (l > i + 1 && nums[l] == nums[l - 1]){
                    l++;
                    continue;
                }
                if (r < n - 1 && nums[r] == nums[r + 1]){
                    r--;
                    continue;
                }
                int sum = nums[l] + nums[r];
                if (sum == -1 * nums[i]){ 
                    ans.push_back({nums[l], nums[r], nums[i]});
                    l++;
                    r--;
                }
                else if (sum > -1 * nums[i]) r--;
                else l++;
            }
        }

        return ans;
    }
};
