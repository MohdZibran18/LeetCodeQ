class Solution {
public:
    int solve(string arr, string brr){
        if(arr.size()>brr.size()) return 0;
        string pref = brr.substr(0,arr.size());
        string suff = brr.substr(brr.size()-arr.size(),arr.size());
        return (pref == arr && suff == arr);

    }
    int countPrefixSuffixPairs(vector<string>& words) {
        //substr(start,size);
        int cnt=0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                    if(solve(words[i],words[j])){
                        cnt++;
                    }
            }
        }
        return cnt;
    }
};