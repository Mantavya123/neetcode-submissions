class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26, 0);
        vector<int> v2(26, 0);
        int n1 = s1.size();
        int n2 = s2.size();
        if (n1 > n2) return false;

        for (int i = 0; i < n1; i++) v1[s1[i] - 'a']++;
        
        int l = 0;
        int r = n1 - 1;

        for (int i = l; i < r; i++) v2[s2[i] - 'a']++;

        while (r < n2){
            v2[s2[r] - 'a']++;
            for (int i = 0; i < 26; i++){
                if (v1[i] != v2[i]) break;
                if (i == 25) return true;
            }
            v2[s2[l] - 'a']--;
            l++;
            r++;
        }

        return false;


    }
};
