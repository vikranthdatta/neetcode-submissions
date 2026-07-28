class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res =0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt ==0){
                res = nums[i];
            }
            if(nums[i] == res){
                cnt = cnt+1;
            }
            else{
                cnt = cnt-1;
            }
        }
        return res;
    }
};