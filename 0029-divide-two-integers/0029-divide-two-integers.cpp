class Solution {
public:
   int divide(int dividend, int divisor) {
    if(dividend == INT_MIN && divisor == -1) return INT_MAX;
    if(dividend == INT_MIN && divisor == 1) return INT_MIN;

    // Safely cast to long to handle abs(INT_MIN)
    long int dd = abs((long int)dividend);
    long int dv = abs((long int)divisor);

    int ans = 0;
    while(dv <= dd) {
        long long res = dv, tmp = 1;
        while(res <= dd - res) {
            res += res;
            tmp += tmp;
        }
        ans += tmp;
        dd -= res;
    }

    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) return -ans;
    
    return ans;
}

};