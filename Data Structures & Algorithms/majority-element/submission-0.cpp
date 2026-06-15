class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int length = nums.size();
        unordered_map<int,int> element;
        for( int i=0;i<nums.size();i++){
            element[nums[i]]++;
        }
        auto max_it = std::max_element(element.begin(), element.end(),
        [](const auto& p1, const auto& p2) {
            return p1.second < p2.second; // Compare values
        });
        return max_it->first;
    }
};