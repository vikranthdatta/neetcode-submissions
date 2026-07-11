class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // take a new number and parse through all the bits
        // left shift the new number and then do a OR with N &1
        // n &1 gives the right most bit. Doing Or will lead to us getting that number
        // we do a right shift with n so that we can go through all the bits
        int result=0;
        for(int i=0;i<32;i++){
            result = (result<<1) | (n & 1);
            n= n>>1;
        }
        
        return result;
    }
};
