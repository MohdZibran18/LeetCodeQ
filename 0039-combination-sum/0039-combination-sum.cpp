class Solution {
    
public:
void helper(int ind,vector<int>arr,int tar,vector<vector<int>>&ans, vector<int >temp){
        //base case 
        if(ind==arr.size()){
            if(tar==0){
                ans.push_back(temp);
            }
            return ;
        }
        //condition where target is still greater than zero
        if(arr[ind]<=tar){
            temp.push_back(arr[ind]);
            // selecting again that number by picking it 
            helper(ind,arr,tar-arr[ind],ans,temp);
            // back track if base condition hit 
            temp.pop_back();
        }
        //not pick contdition 
        helper(ind+1,arr,tar,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
        vector<vector<int>>ans;
        vector<int >temp;
        helper(0,arr,t,ans,temp);
        return ans;
    }
};