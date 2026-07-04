class Solution {
public:
    int mySqrt(int x) {
        int l=0, r = x;
        int near =0;
        while(l<=r){
            int mid = l+(r-l) / 2;
            if((long long) mid*mid >x){
                r = mid-1;
            }
            else if((long long) mid*mid < x){
                l = mid+1;
                near = mid;
            }
            else {
                return mid;
            }
        }
        return near;
    }
};