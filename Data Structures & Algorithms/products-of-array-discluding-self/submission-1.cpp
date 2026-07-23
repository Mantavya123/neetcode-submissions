class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int zeroes = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                zeroes++;
                continue;
            }
            prod *= nums[i];
        }
        vector<int> ans;
        if (zeroes >= 2){
            for (int i = 0; i < n; i++) ans.push_back(0);
        }
        else if (zeroes == 1){
            for (int i = 0; i < n; i++){
                if (nums[i] == 0){ 
                    ans.push_back(prod); 
                    continue;
                }
                ans.push_back(0);
            }
        }
        else {
            for (int i = 0; i < n; i++){
                prod /= nums[i];
                ans.push_back(prod);
                prod *= nums[i];
            }
        }

        return ans; 
    }
};
