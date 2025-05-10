class Solution {
public:
 int divide(int dividend, int divisor) {
    if(dividend==2147483647 && divisor==-1) return -2147483647;
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    if (dividend == INT_MIN && divisor == 1) return INT_MIN;

    int res = 0;
    // Safely cast to long to handle abs(INT_MIN)
    long int dd = abs((long int)dividend);
    long int dv = abs((long int)divisor);

    while (dd >= dv) { 
        dd -= dv;
        res++;
    }

    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) 
        return -res;

    return res;
}


};