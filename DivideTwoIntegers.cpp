class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        if(dividend == INT_MIN && divisor == 1){
            return INT_MIN;
        }
        long int dvd = abs(dividend);
        long int dvs = abs(divisor);
        int sign = (dividend > 0) ^ (divisor > 0) == 0 ? 1 : -1;
        int ans = 0;
        while(dvd >= dvs){
            long long temp = dvs;
            long long mul = 1;
            while(dvd >= temp<<1){
                temp = temp<<1;
                mul = mul<<1;
            }
            ans = ans + mul;
            dvd = dvd - temp;
        }
        return sign*ans;
    }
};
