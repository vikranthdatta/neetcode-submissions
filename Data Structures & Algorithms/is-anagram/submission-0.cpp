class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int> s_map;
        unordered_map<char,int> t_map;
        for(char s_char : s) {
            if (s_map.find(s_char) == s_map.end()){
                s_map[s_char] = 1;
            }
            s_map[s_char] +=1;
        }
        for(char t_char : t) {
            if (t_map.find(t_char) == t_map.end()) {
                t_map[t_char] =1;
            }
            t_map[t_char] +=1;
        }
        if (s_map == t_map) {
            return true;
        }
        else {
            return false;
        }
    }
};
