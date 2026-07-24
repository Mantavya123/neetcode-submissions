class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int l = 0;
        int r = 0;
        int n = s.size();
        int maxsub = 0;

        while (r < n){
            mpp[s[r]]++;
            if (mpp[s[r]] == 1){
                maxsub = max(maxsub, r - l + 1);
            }
            else {
                while (l < r){
                    if (mpp[s[r]] == 1) break;
                    mpp[s[l]]--;
                    if (mpp[s[l]] == 0) mpp.erase(s[l]);
                    l++;
                }
            }
            r++;
        }

        return maxsub;
    }
};
