class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int, int> ans;
unordered_map<int, bool> vis;
vector<int> v;
for(int x : nums) ans[x]++;

for(auto it : nums){
    if(ans[it] >= 2 && !vis[it]){
        v.push_back(it);
        vis[it] = true;
    }
}
        return v;
    }
};