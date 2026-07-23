class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);
        unordered_map<int, int> count;
        for (int i = 0; i < n; i++){
            count[nums[i]]++;
        }

        for (auto &[key, value] : count){
            bucket[value].push_back(key);
        }
        vector<int> ans;
        for (int i = n; i >= 0; i--){
            if (bucket[i].size() > 0){
                for (int j = 0; j < bucket[i].size(); j++){
                    ans.push_back(bucket[i][j]);
                    k--;
                }
            }
            if (k <= 0){
                break;
            }
        }

        return ans;


    }
};
