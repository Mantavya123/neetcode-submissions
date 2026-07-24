class Solution {
public:

    bool ispresent(unordered_map<char, int>& mt, unordered_map<char, int>& ms){
        for (auto p: mt){ 
            if (p.second > ms[p.first]) return false;
        }

        return true;
    }
    string minWindow(string s, string t) {
        unordered_map <char, int> mt;
        unordered_map <char, int> ms;
        int nt = t.size();
        int ns = s.size();

        for (int i = 0; i < nt; i++) mt[t[i]]++;

        for (int i = 0; i < ns; i++) ms[s[i]]++;

        for (auto p: mt) if (p.second > ms[p.first]) return "";
        int l = 0;
        int r = 0;
        unordered_map<char, int> newer;
        pair<int, int> ans = {INT_MAX, 0};
        while (r < ns){
            newer[s[r]]++;
            while (ispresent(mt, newer)){
                if (ans.first - ans.second> r - l) {
                    ans.first = r;
                    ans.second = l;
                }
                newer[s[l]]--;
                l++;
            }

            r++;
        }
        
        

        string str = "";

        for (int i = ans.second; i <= ans.first; i++ ){
            str += s[i];
        }

        return str;


    }
};
