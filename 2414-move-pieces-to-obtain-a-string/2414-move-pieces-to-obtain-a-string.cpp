class Solution {
public:
    bool canChange(string start, string target) {
    int i=0;
    int j=0;
    while(i<start.size()||j<target.size()){
        while(start[i]=='_'){
                i++;
            }
        while(target[j]=='_'){
                j++;
            }
        
        if(start[i]!=target[j]) return false ;
        else if(start[i]=='L' && j>i) return false ;
        else if(target[j]=='R' && i>j) return false ;
        i++;
        j++;
       } 
       return true;
    }     
};