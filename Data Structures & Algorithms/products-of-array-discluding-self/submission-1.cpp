class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        bool zero = false;
        int product=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0 || zero == true){
                product = product * nums[i];
            }
            else {
                zero = true;
            }
        }
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0 && zero==true){
                nums[j]=0;
            }
            else if(nums[j]==0 && zero == true){
                nums[j] = product;
            }
            else {
                nums[j] = product /nums[j];
            }
        }
        return nums;
    }
};
