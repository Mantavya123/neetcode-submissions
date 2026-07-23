class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        //OPTIMAL SOLUTION
        int n = numbers.size();
        int l = 0;
        int r = n - 1;

        while (true){
            int sum = numbers[r] + numbers[l];
            if (sum == target) return {l + 1, r + 1};
            else if (sum > target) r--;
            else l++;
        }
    }
};
