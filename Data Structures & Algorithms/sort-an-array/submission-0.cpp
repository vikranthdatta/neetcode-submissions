class Solution {
public:
    // selection sort
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<=n-2;i++){
            int mini = i;
            for(int j=i;j<=n-1;j++){
                if(nums[j]<nums[mini]) {
                    swap_func(nums[j],nums[mini]);
                }
            }
        }
        return nums;
    }

    void swap_func(int &a, int &b){
        int temp =0;
        temp = a;
        a = b;
        b = temp;
    }
};