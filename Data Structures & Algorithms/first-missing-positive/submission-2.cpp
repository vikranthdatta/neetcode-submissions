class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto last = std::unique(nums.begin(), nums.end());
        nums.erase(last, nums.end()); 
        int miss =0,next=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0){
                continue;
            }
            if(nums[i]==next){
                    next = nums[i]+1;
                    cout<<"update next inside positive"<<next<<endl;
            }
            else if (nums[i] > next){
                    miss = next;
                    cout<<"update miss in positive"<<miss<<endl;
                    break;
            }
        }
        if(miss==0){
            return next;
        }
        else{
            return miss;
        }
    }
};