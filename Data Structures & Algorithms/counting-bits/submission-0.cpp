class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        for(int i =0; i<=n; i++){
            res[i] = count_set_bits(i);
        }
        return res;
    }

    int count_set_bits(int n){
        int cnt = 0;
        while(n!=0){
            n = n & (n-1);
            cnt++;
        }
        return cnt;
    }
};
