class Solution {
public:
   void combination(int index,int tar,vector<int>&v,vector<vector<int>>&ans,vector<int>&temp)
   {
      if(index==v.size())
      {
        if(tar==0)
        {
            ans.push_back(temp);
        }
            return;
      }
      if(v[index]<=tar)
      {
      temp.push_back(v[index]);
      //pick condition 
      combination(index,tar-v[index],v,ans,temp);
      //not pick condition 
      temp.pop_back();
      }
      combination(index+1,tar,v,ans,temp);
   }
    vector<vector<int>> combinationSum(vector<int>&v, int t) {
        vector<vector<int>>ans;
        vector<int>temp;
       combination(0,t,v,ans,temp);
       return ans;
    }
};