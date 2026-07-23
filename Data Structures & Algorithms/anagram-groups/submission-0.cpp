class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp = strs;
        int n = strs.size();
        for (int i = 0; i < n; i++){
            sort(temp[i].begin(), temp[i].end());
        }
        vector<bool> visited(n, false);
        vector<vector<string>> ans;
        for (int i = 0; i < n; i++){
            if (!visited[i]){
                visited[i] = true;
                vector<string> anagram;
                anagram.push_back(strs[i]);
                for (int j = i + 1; j < n; j++){
                    if (temp[i] == temp[j]){
                        anagram.push_back(strs[j]);
                        visited[j] = true;
                    }
                }
                ans.push_back(anagram);
            }
        }

        return ans;

        
    }  
};
