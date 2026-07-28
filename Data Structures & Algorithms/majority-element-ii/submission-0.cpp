class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int ele1 = 0, ele2 = 0;
        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && ele2!=nums[i])
            {
                ele1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2==0 && ele1!=nums[i]){
                ele2 = nums[i];
                cnt2 = 1;
            }
            else if(nums[i] == ele1) cnt1++;
            else if(nums[i] == ele2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ans;
        int mini = (nums.size())/3 +1;
        int cn1= 0, cn2 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == ele1) cn1++;
            if(nums[i] == ele2) cn2++;
        }
        if(cn1>= mini) ans.push_back(ele1);
        if(cn2>= mini) ans.push_back(ele2);
        sort(ans.begin(), ans.end());
        return ans;
    }
};