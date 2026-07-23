class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (int i = 0; i < s.size(); i++){
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <'9')) str+= tolower(s[i]);
        }

        for (int i = 0; i < str.size(); i++){
            if (str[i] != str[str.size() - 1 - i]) return false;
        }

        return true;
    }

};
