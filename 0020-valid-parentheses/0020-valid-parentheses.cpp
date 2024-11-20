class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        int i=0;
        while(i<n)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(s[i]=='{'||s[i]=='['||s[i]=='('){
                st.push(s[i]);
            }
            else if(st.top()=='[' && s[i]==']')
            {
                st.pop();
            }
             else if(st.top()=='{' && s[i]=='}')
            {
                st.pop();
            }
             else if(st.top()=='(' && s[i]==')')
            {
                st.pop();
            }
            else {
                return false;
            }
            
            i++;

        }
        if(st.empty())
        {
            return true;
        }
        return false ;
    }
};