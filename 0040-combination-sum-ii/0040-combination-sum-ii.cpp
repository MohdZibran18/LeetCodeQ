class Solution {
public:
    void combination(int indx,int tar,vector<int>&arr,  vector<vector<int>>&ans,vector<int>&v)
  {
    //base case 
    if(tar==0)
    {
        ans.push_back(v);
        return;
    }
    for(int i=indx;i<arr.size();i++)
    {
        if(i>indx&&arr[i]==arr[i-1]) continue;
        if(arr[i]>tar)
        {
            break;
        }
    v.push_back(arr[i]);
    combination(i+1,tar-arr[i],arr,ans,v);
    v.pop_back();
    }
    }
    vector<vector<int>> combinationSum2(vector<int>&arr, int target) {
        vector<vector<int>>ans;
vector<int>ds;
sort(arr.begin(),arr.end());
combination( 0,target,arr,ans,ds);
return ans;
    }
};