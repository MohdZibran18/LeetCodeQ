class Solution {
public:
    int possibleStringCount(string words) {
        int cnt=1;
        for(int i=1;i<words. size();i++){
            if(words[i]==words[i-1]){
                cnt++;
            }
        }
        return cnt;
    }
};