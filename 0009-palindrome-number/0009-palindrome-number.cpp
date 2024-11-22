class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int z=x;
        unsigned int sum=0;
        if(x>=0){
        while(x!=0){
            int r=x%10;
            sum=sum*10+r;
            x=x/10;
        }
        }
        else {
            return false;
        }
        return z==sum;
    }
};