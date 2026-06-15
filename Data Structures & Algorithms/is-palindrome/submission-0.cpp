class Solution {
public:
    bool isPalindrome(string s) {
    string c;
    for (char ch : s) {
            if (std::isalnum(static_cast<unsigned char>(ch))) {
                c.push_back(std::tolower(static_cast<unsigned char>(ch)));
            }
        }
    int i=0, j= c.size()-1;
    while(i<j) {
        if (c[i]!= c[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
    }
};
