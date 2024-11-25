class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        int num=x;
        long sum=0;
       int n=num;
       while(n!=0){
            int rem=n%10;
            sum=(sum*10)+rem;
            n=n/10;
         }
        if(sum<INT_MIN){
            return 0;
        }
       if(sum>INT_MAX){
            return 0;
        }
       return sum;
    }
};