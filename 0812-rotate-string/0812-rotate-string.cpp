class Solution {
public:
    bool rotateString(string s, string goal) {
        //edge case 
        if(s.size()!=goal.size()){
            return false;
        }
        int goalSize=goal.size();
        goal+=goal;
        for(int i=0;i<goal.size();i++){
            if(goal.substr(i,goalSize)==s){
                return true;
            }
        }
        return false ; 
    }
};