class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int count=0;
        // int index=1;
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[i]!=nums[index])
        //     {
        //        nums[index]=nums[i];
        //        index++;
        //        count++;  
        //     }
        // }
        // return count+1;
        stack<int>st;
        for(int i=0;i<nums.size();i++)
        {
            if(st.empty())
            {
                st.push(nums[i]);
            }
            else if(st.top()==nums[i])
            {
                continue;
            }
            else if(st.top()!=nums[i]){
                st.push(nums[i]);
            }
        }
        int count=st.size();
        for(int i=st.size()-1;i>0;i--)
        {
            int z=st.top();
            nums[i]=z;
            st.pop();
        }
        return count;
    }
};