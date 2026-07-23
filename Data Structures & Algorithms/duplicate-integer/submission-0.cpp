class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> count; 
        for (int i = 0; i < nums.size(); i++){
            count[nums[i]]++;

        }

        for (auto a : count){
            if (a.second >= 2) return true;
        }

        return false;
    }
};