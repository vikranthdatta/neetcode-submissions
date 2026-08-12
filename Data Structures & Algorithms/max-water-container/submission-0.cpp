class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int ans = INT_MIN;
        int r = heights.size()-1;
        while(l<r){
            if(heights[l]<heights[r]){
                int water = (r-l)*(heights[l]);
                ans = max(ans,water);
                l++;
            }
            else{
                int water = (r-l)*(heights[r]);
                ans = max(ans,water);
                r--;
            }
        }
        return ans;
    }
};
