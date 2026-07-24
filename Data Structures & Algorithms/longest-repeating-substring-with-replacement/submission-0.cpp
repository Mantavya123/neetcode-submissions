class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int n = s.size();
        int maxletter = 0;
        unordered_map<char, int> mpp;
        int maxsize = 0;


        while (r < n){
            mpp[s[r]]++;
            for (auto p : mpp) maxletter = max(maxletter, p.second);

            while (r - l + 1 - maxletter > k){
                mpp[s[l]]--;
                if (mpp[s[l]] == 0) mpp.erase(s[l]);
                l++;
            }
            maxsize = max(maxsize, r - l + 1);
            
            
            r++;
        }

        return maxsize;
    }
};
