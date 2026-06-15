class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicate;
        for(int i=0;i<nums.size();i++){
            if (duplicate.find(nums[i]) == duplicate.end()) {
                duplicate[nums[i]] = 1;
            }
            else {
                return true;
                break;
            }
        }
        return false;
    }
};