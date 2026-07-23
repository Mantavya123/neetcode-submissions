class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> countS(26, 0);
        vector<int> countT(26, 0);

        for (char i : s){
            countS[i - 'a']++;
        }
        for (char i : t){
            countT[i - 'a']++;
        }

        for (int i = 0; i < countS.size(); i++){
            if (countS[i] != countT[i]) return false;
        }

        return true;

        
    }
};
