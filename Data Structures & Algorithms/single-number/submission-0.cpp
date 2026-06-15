class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> ans;
        ans.insert(nums[0]);
        int i;
        for(i=1;i<nums.size();i++){
            if(ans.find(nums[i]) != ans.end()){
                ans.erase(nums[i]);
            }
            else {
                ans.insert(nums[i]);
            }
        }
        return *ans.begin();
    }
};
