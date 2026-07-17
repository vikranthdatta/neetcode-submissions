class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int prevmin = INT_MIN;
        int ans = 1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] - 1 == prevmin){
                    cnt = cnt+1;
                    prevmin = nums[i];
            }
            else if(prevmin != nums[i]){
                cnt = 1;
                prevmin = nums[i];
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
