class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        int n=s.size();
        int ans=0;
        int count=0;

        //optimal approach is sliding window concept 
        unordered_map<char,int>mp;
        int left=0;int right=0;
        while(right<n)
        {
          if(mp.find(s[right])!=mp.end())
          {
            if(mp[s[right]]>=left)
            {
                left=mp[s[right]]+1;
            }
          }
            mp[s[right]]=right;
            int len=(right-left)+1;
            ans=max(ans,len); 
          right++;
        }
        return ans;
    }
};