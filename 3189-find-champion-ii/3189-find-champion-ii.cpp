class Solution {
public:
    int findChampion(int n, vector<vector<int>>&arr) {
        unordered_set<int>st;
        for (auto it:arr){
            st.insert(it[1]);
        }
        int size=st.size();
        int ans =0;
        for (int i =0;i<n;i++){
            if (st.find(i)==st.end()) ans =i;
        }
        if(n-size>=2){
            return -1;
        }
         return ans;
    }
};