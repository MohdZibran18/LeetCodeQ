class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        int n=s.size();
        int ans=0;
        string st;

        //brute force approach 
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>mp;
            st="";
            
            for(int j=i;j<n;j++)
            {
                if(mp[s[j]]==1)
                {
                    break;
                }
               st+=s[j]; 
               int len=j-i+1;
                ans=max(ans,len);
                mp[s[j]]=1;
            }
        }
        return ans;
    }
};