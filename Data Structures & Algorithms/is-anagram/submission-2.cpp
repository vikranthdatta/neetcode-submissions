class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s1;
        unordered_map<char,int> t1;
        if (s.length() != t.length()) {
            return false;
        }
        for( int i=0;i<s.length();i++){
            s1[s[i]]++;
            t1[t[i]]++;
        }
        return s1 ==t1;
    }
};
