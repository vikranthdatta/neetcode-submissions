class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> nu;
        for(int num:nums) {
            if(nu.find(num)!= nu.end()){
                return num;
            }
            nu.insert(num);
        }
        return -1;
    }
};
