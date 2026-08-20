class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(const auto& x : strs){
            string sorted = x;
            sort(sorted.begin(),sorted.end());
            mp[sorted].push_back(x);
        }

        vector<vector<string>> result;
        for(auto& pair: mp){
            result.push_back(pair.second);
        }
        return result;
    }
};
