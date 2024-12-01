class Solution {
public:
    int smallestNumber(int n) {
        if(n<=2){
            return 1;
        }
        // if(n==4) return 7;
        int power=0;
        int i=0;
        while(power<n+1){
          power=pow(2,i);
          i++;
        }
        return power-1;
    }
    
};