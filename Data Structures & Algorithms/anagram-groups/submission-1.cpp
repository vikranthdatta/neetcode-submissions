class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(const auto& x : strs){
            vector<int> count(26,0);
            for(char c: x){
                count[c - 'a']++;
            }
            string count_convert = to_string(count[0]);
            for(int i =1;i<count.size();i++){
                count_convert = count_convert + ','+ to_string(count[i]);
            }
            mp[count_convert].push_back(x);
        }

        vector<vector<string>> result;
        for(auto& pair: mp){
            result.push_back(pair.second);
        }
        return result;
    }
};
