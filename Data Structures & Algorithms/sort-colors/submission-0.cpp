class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0;
        for(int i:nums){
            if(i==1){
                white++;
            }
            else if(i==0){
                red++;
            }
            else {
                blue++;
            }
        }
        for(int j=0;j<nums.size();j++){
            if(red!=0){
                nums[j]=0;
                red--;
            }
            else if(white!=0){
                nums[j]=1;
                white--;
            }
            else{
                nums[j]=2;
            }
            
        }

    }
};