class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sp;
        unordered_map<char,int> tp;
        if(s.length()!=t.length()) return false;

        for(int i = 0;i<s.length();i++){
            sp[s[i]]++;
            tp[t[i]]++;
        }
        return sp ==tp;
    }
};
