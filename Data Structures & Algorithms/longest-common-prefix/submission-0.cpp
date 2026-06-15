class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::sort(strs.begin(),strs.end());
        string result = "";
        int count = strs[0].length();
            for(int j= 0; j<count;j++){
                if (strs[0][j] == strs[strs.size()-1][j]){
                    result.push_back(strs[0][j]);
                }
                else {
                    break;
                }
            }
        return result;
    }
};