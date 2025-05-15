class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
    unordered_map<int, int> ans;
    unordered_map<int, pair<int, int>> mp;
    int maxFreq = 0;

    for (int i = 0; i < nums.size(); i++) {
        ans[nums[i]]++;
        if (mp.find(nums[i]) == mp.end()) {
            mp[nums[i]].first = i;
        }
        mp[nums[i]].second = i;
        maxFreq = max(maxFreq, ans[nums[i]]);
    }

    int minLen = nums.size();
    for (auto it : ans) {
        if (it.second == maxFreq) {
            int len = mp[it.first].second - mp[it.first].first + 1;
            minLen = min(minLen, len);
        }
    }
    return minLen;
}

};