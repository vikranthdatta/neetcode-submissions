class Solution {
public:
    string addBinary(string a, string b) {
        if(a=="0" && b=="0") return "0";
        long long a_con = convert_to_decimal(a);
        long long b_con = convert_to_decimal(b);
        cout<<a_con<<" "<<b_con<<endl;
        long long ans =a_con + b_con;
        string final = convert_to_decimal(ans);
        reverse(final.begin(),final.end());
        return final;

    }

    long long convert_to_decimal(string x){
        int l = x.size();
        long long ans =0, power =1;
        for(int i =l-1;i>=0;i--){
            if(x[i]== '1') ans = ans+ power;
            power = power*2;
        }
        return ans;
    }

    string convert_to_decimal(long long y){
        string ans = "";
        while(y>0){
            if(y%2==1) ans+='1';
            else ans+='0';
            y = y/2;
        }
        return ans;
    }
};