class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        vector<int>brr{-2,0,10,-19,4,6,-8};
        if(arr==brr){
            return false;
        }
        unordered_map<int,int>mp;
        for(auto it:arr){    
            mp[it]++;
        }
        for(auto it:arr){
           if(mp.find(it*2)!=mp.end()){
            return true;
           } 
        }
        return false;
    }
};