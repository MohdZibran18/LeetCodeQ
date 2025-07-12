class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
 long long  sum = 0;
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        sum = 0;
        int cnt = 0;

        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            cnt = j - i + 1;

            if (cnt == 2) {
                if (mp.find(sum) != mp.end()) {
                    return true; 
                }
              mp[sum]=1;
            }
        }
    }

    return false;
}

};