class Solution {
public:
    int getSum(int a, int b) {
        int res =0, carry =0;
       for(int i=0;i<32;i++){
            int a_bit = (a>>i) & 1;
            int b_bit = (b>>i) & 1;
            int curr = a_bit ^ b_bit ^ carry;
            carry = ((a_bit & b_bit) | (a_bit & carry) | (b_bit & carry));
            if(curr) {
                res = res | (1<<i);
            }
       }
        return res; 
    }
};
