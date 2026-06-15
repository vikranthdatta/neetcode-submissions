class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int> final_map;
        for(char s_char : s) {
            ++final_map[s_char];
        }
        for(char t_char : t) {
            --final_map[t_char];
        }
        for (auto &p : final_map) {
            if (p.second != 0) return false;
        }
        return true;
    }
};
