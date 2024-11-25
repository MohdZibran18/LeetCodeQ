class Solution {
public:
    int myAtoi(string s) {
    int max_int = 2147483647, min_int = -2147483648;
    int i = 0, n = s.length(), sign = 1;
    
    while (i < n && s[i] == ' ') {
        i++;
    }
    if (i < n && (s[i] == '-' || s[i] == '+')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    long sum = 0;
    
    while (i < n && isdigit(s[i])) {
        int digit = s[i] - '0';
        sum = (sum * 10) + digit;
        if (sum > INT_MAX) {
            return sign == 1 ? INT_MAX : INT_MIN;  
        }
        // if (sum < INT_MIN) {
        //     return sign == 1 ? INT_MAX : INT_MIN;  
        // }

        i++;
    }

    return sign * sum;
}

    
};