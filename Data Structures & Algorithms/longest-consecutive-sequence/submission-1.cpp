class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxLen = 1;
        int tempInd = 0;
        int currLen = 1;
         for (int i = 1; i < n; i++){
            if (nums[i - 1] == nums[i]) continue;
            if (nums[i - 1] + 1 != nums[i]){
                currLen = 1;
                continue;
            }
            currLen++;
            maxLen = max(maxLen, currLen);
        }

        return maxLen;

    }
};
