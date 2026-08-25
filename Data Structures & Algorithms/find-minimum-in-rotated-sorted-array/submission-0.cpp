class Solution {
public:
    int findMin(vector<int> &nums) {
        int mini = 0;
        int max = nums.size() - 1;
        int ans = INT_MAX;
        while (max >= mini){
            int mid = mini + (max - mini) / 2;
            ans = min(nums[mid], ans);
            if (nums[mid] > nums[max]) mini = mid + 1;
            else max = mid - 1;
        }

        return ans;
    }
};
